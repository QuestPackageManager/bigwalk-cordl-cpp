#pragma once
// IWYU pragma private; include "Animancer/HybridAnimancerComponent.hpp"
#include "Animancer/zzzz__NamedAnimancerComponent_impl.hpp"
#include "Animancer/zzzz__HybridAnimancerComponent_def.hpp"
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "Animancer/zzzz__ControllerState_def.hpp"
#include "Animancer/zzzz__ControllerTransition_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimatorControllerPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__AnimatorClipInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "UnityEngine/zzzz__AnimatorCullingMode_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorTransitionInfo_def.hpp"
#include "UnityEngine/zzzz__AnimatorUpdateMode_def.hpp"
#include "UnityEngine/zzzz__Avatar_def.hpp"
#include "UnityEngine/zzzz__HumanBodyBones_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_Controller
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Animancer::ControllerTransition*> (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_Controller)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_Controller", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.PlayController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::ControllerState* (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::PlayController)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1802ef6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"PlayController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_ControllerPlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimatorControllerPlayable (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_ControllerPlayable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f0250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_ControllerPlayable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::HybridAnimancerComponent*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.OnInitializePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::OnInitializePlayable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ef6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::HybridAnimancerComponent*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GatherAnimationClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*)>(&::Animancer::HybridAnimancerComponent::GatherAnimationClips)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802eec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                    {::i2c::class_of<::Animancer::HybridAnimancerComponent*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_playableGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_playableGraph)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f0720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_playableGraph", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_runtimeAnimatorController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RuntimeAnimatorController> (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_runtimeAnimatorController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f07e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_runtimeAnimatorController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_runtimeAnimatorController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::RuntimeAnimatorController*)>(&::Animancer::HybridAnimancerComponent::set_runtimeAnimatorController)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f0a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_runtimeAnimatorController", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_speed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(float_t)>(&::Animancer::HybridAnimancerComponent::set_speed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_speed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_applyRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_applyRootMotion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f02d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_applyRootMotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_applyRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(bool)>(&::Animancer::HybridAnimancerComponent::set_applyRootMotion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_applyRootMotion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_bodyRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_bodyRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f0340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_bodyRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_bodyRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::Quaternion)>(&::Animancer::HybridAnimancerComponent::set_bodyRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f0900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_bodyRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_bodyPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_bodyPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f0310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_bodyPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_bodyPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::Vector3)>(&::Animancer::HybridAnimancerComponent::set_bodyPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f08c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_bodyPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_gravityWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_gravityWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_gravityWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_hasRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_hasRootMotion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_hasRootMotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_layersAffectMassCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_layersAffectMassCenter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_layersAffectMassCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_layersAffectMassCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(bool)>(&::Animancer::HybridAnimancerComponent::set_layersAffectMassCenter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f09b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_layersAffectMassCenter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_pivotPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_pivotPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f06d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_pivotPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_pivotWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_pivotWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_pivotWeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_rootRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_rootRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f07b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_rootRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_rootRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::Quaternion)>(&::Animancer::HybridAnimancerComponent::set_rootRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f0a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_rootRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_rootPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_rootPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f0780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_rootPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_rootPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::Vector3)>(&::Animancer::HybridAnimancerComponent::set_rootPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f09f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_rootPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_angularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_angularVelocity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_angularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_velocity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f0850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_deltaRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_deltaRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f03c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_deltaRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_deltaPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_deltaPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802f0390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_deltaPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.ApplyBuiltinRootMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::ApplyBuiltinRootMotion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ee620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"ApplyBuiltinRootMotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_feetPivotActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_feetPivotActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f03f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_feetPivotActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_feetPivotActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(float_t)>(&::Animancer::HybridAnimancerComponent::set_feetPivotActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_feetPivotActive", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_stabilizeFeet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_stabilizeFeet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_stabilizeFeet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_stabilizeFeet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(bool)>(&::Animancer::HybridAnimancerComponent::set_stabilizeFeet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_stabilizeFeet", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_rightFeetBottomHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_rightFeetBottomHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_rightFeetBottomHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_leftFeetBottomHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_leftFeetBottomHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_leftFeetBottomHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.CrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, float_t, int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::CrossFade)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802ee930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"CrossFade", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.CrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::HybridAnimancerComponent::*)(::StringW, float_t, int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::CrossFade)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1802ee9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"CrossFade", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.CrossFadeInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, float_t, int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802ee640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.CrossFadeInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::HybridAnimancerComponent::*)(::StringW, float_t, int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::CrossFadeInFixedTime)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1802ee700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::Play)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802efa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::HybridAnimancerComponent::*)(::StringW, int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::Play)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1802efa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.PlayInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802ef990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.PlayInFixedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Animancer::AnimancerState* (::Animancer::HybridAnimancerComponent::*)(::StringW, int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::PlayInFixedTime)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1802ef7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetBool)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eed40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetBool", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)(::StringW)>(&::Animancer::HybridAnimancerComponent::GetBool)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eeda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetBool", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, bool)>(&::Animancer::HybridAnimancerComponent::SetBool)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802efe00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetBool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::StringW, bool)>(&::Animancer::HybridAnimancerComponent::SetBool)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802efd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetFloat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eeff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)(::StringW)>(&::Animancer::HybridAnimancerComponent::GetFloat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetFloat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::SetFloat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802efef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::StringW, float_t)>(&::Animancer::HybridAnimancerComponent::SetFloat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802eff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)(::StringW, float_t, float_t, float_t, float_t)>(&::Animancer::HybridAnimancerComponent::SetFloat)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802effd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)(int32_t, float_t, float_t, float_t, float_t)>(&::Animancer::HybridAnimancerComponent::SetFloat)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802efe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetInteger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetInteger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)(::StringW)>(&::Animancer::HybridAnimancerComponent::GetInteger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetInteger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, int32_t)>(&::Animancer::HybridAnimancerComponent::SetInteger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f0040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::StringW, int32_t)>(&::Animancer::HybridAnimancerComponent::SetInteger)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f00a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetInteger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::SetTrigger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f01e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::StringW)>(&::Animancer::HybridAnimancerComponent::SetTrigger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802f0180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::ResetTrigger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802efca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::StringW)>(&::Animancer::HybridAnimancerComponent::ResetTrigger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802efd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.IsParameterControlledByCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::IsParameterControlledByCurve)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.IsParameterControlledByCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)(::StringW)>(&::Animancer::HybridAnimancerComponent::IsParameterControlledByCurve)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorControllerParameter* (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetParameter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetParameter", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetParameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::GetParameterCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802ef410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetParameterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_parameterCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_parameterCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802ef410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_parameterCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorControllerParameter*> (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_parameters)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802f05b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetCurrentAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetCurrentAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eee60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetCurrentAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(&::Animancer::HybridAnimancerComponent::GetCurrentAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eeec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetCurrentAnimatorClipInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetCurrentAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802eee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetCurrentAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetNextAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AnimatorClipInfo> (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetNextAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetNextAnimatorClipInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*)>(&::Animancer::HybridAnimancerComponent::GetNextAnimatorClipInfo)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetNextAnimatorClipInfoCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetNextAnimatorClipInfoCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetNextAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_humanScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_humanScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f04b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_humanScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_isHuman
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_isHuman)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f04d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_isHuman", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetBoneTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::HumanBodyBones)>(&::Animancer::HybridAnimancerComponent::GetBoneTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802eed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetBoneTransform", {}, {::i2c::type_of<::UnityEngine::HumanBodyBones>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetBoneLocalRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::HumanBodyBones, ::UnityEngine::Quaternion)>(&::Animancer::HybridAnimancerComponent::SetBoneLocalRotation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802efd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetBoneLocalRotation", {}, {::i2c::type_of<::UnityEngine::HumanBodyBones>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetLayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::GetLayerCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802ef110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetLayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_layerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_layerCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802ef110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_layerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetLayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Animancer::HybridAnimancerComponent::*)(::StringW)>(&::Animancer::HybridAnimancerComponent::GetLayerIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetLayerIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetLayerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetLayerName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetLayerName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetLayerWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetLayerWeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetLayerWeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.SetLayerWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(int32_t, float_t)>(&::Animancer::HybridAnimancerComponent::SetLayerWeight)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f0110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetLayerWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetBehaviours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> (::Animancer::HybridAnimancerComponent::*)(int32_t, int32_t)>(&::Animancer::HybridAnimancerComponent::GetBehaviours)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802eed00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetBehaviours", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetCurrentAnimatorStateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetCurrentAnimatorStateInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802eef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetCurrentAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetNextAnimatorStateInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorStateInfo (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetNextAnimatorStateInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802ef3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetNextAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.HasState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)(int32_t, int32_t)>(&::Animancer::HybridAnimancerComponent::HasState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"HasState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.IsInTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::IsInTransition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ef520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"IsInTransition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.GetAnimatorTransitionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorTransitionInfo (::Animancer::HybridAnimancerComponent::*)(int32_t)>(&::Animancer::HybridAnimancerComponent::GetAnimatorTransitionInfo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802eec90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetAnimatorTransitionInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_avatar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Avatar> (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_avatar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f02f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_avatar", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_avatar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::Avatar*)>(&::Animancer::HybridAnimancerComponent::set_avatar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f08a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_avatar", {}, {::i2c::type_of<::UnityEngine::Avatar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_cullingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorCullingMode (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_cullingMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_cullingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_cullingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::AnimatorCullingMode)>(&::Animancer::HybridAnimancerComponent::set_cullingMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_cullingMode", {}, {::i2c::type_of<::UnityEngine::AnimatorCullingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_fireEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_fireEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_fireEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_fireEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(bool)>(&::Animancer::HybridAnimancerComponent::set_fireEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_fireEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_hasBoundPlayables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_hasBoundPlayables)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_hasBoundPlayables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_hasTransformHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_hasTransformHierarchy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_hasTransformHierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_isInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f04f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_isOptimizable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_isOptimizable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_isOptimizable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_logWarnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_logWarnings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_logWarnings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_logWarnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(bool)>(&::Animancer::HybridAnimancerComponent::set_logWarnings)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_logWarnings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_updateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimatorUpdateMode (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_updateMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802dd940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_updateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_updateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(::UnityEngine::AnimatorUpdateMode)>(&::Animancer::HybridAnimancerComponent::set_updateMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_updateMode", {}, {::i2c::type_of<::UnityEngine::AnimatorUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.get_keepAnimatorStateOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::get_keepAnimatorStateOnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_keepAnimatorStateOnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.set_keepAnimatorStateOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)(bool)>(&::Animancer::HybridAnimancerComponent::set_keepAnimatorStateOnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802f0990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_keepAnimatorStateOnDisable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent.Rebind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::Rebind)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802efc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"Rebind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::HybridAnimancerComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::HybridAnimancerComponent::*)()>(&::Animancer::HybridAnimancerComponent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Animancer::ControllerTransition*& Animancer::HybridAnimancerComponent::__cordl_internal_get__Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller;
}
constexpr ::Animancer::ControllerTransition* const& Animancer::HybridAnimancerComponent::__cordl_internal_get__Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Controller;
}
constexpr void Animancer::HybridAnimancerComponent::__cordl_internal_set__Controller(::Animancer::ControllerTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Controller = value;
}
inline ::by_ref<::Animancer::ControllerTransition*> Animancer::HybridAnimancerComponent::get_Controller()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_Controller", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Animancer::ControllerTransition*>>(this, ___internal_method);
}
inline ::Animancer::ControllerState* Animancer::HybridAnimancerComponent::PlayController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"PlayController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::ControllerState*>(this, ___internal_method);
}
inline ::UnityEngine::Animations::AnimatorControllerPlayable Animancer::HybridAnimancerComponent::get_ControllerPlayable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_ControllerPlayable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimatorControllerPlayable>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::HybridAnimancerComponent*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::OnInitializePlayable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::HybridAnimancerComponent*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Animancer::HybridAnimancerComponent*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clips);
}
inline ::UnityEngine::Playables::PlayableGraph Animancer::HybridAnimancerComponent::get_playableGraph()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_playableGraph", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RuntimeAnimatorController> Animancer::HybridAnimancerComponent::get_runtimeAnimatorController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_runtimeAnimatorController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RuntimeAnimatorController>>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_runtimeAnimatorController(::UnityEngine::RuntimeAnimatorController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_runtimeAnimatorController", {}, {::i2c::type_of<::UnityEngine::RuntimeAnimatorController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::HybridAnimancerComponent::get_speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_speed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_speed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::HybridAnimancerComponent::get_applyRootMotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_applyRootMotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_applyRootMotion(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_applyRootMotion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion Animancer::HybridAnimancerComponent::get_bodyRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_bodyRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_bodyRotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_bodyRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Animancer::HybridAnimancerComponent::get_bodyPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_bodyPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_bodyPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_bodyPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::HybridAnimancerComponent::get_gravityWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_gravityWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::HybridAnimancerComponent::get_hasRootMotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_hasRootMotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::HybridAnimancerComponent::get_layersAffectMassCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_layersAffectMassCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_layersAffectMassCenter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_layersAffectMassCenter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Animancer::HybridAnimancerComponent::get_pivotPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_pivotPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t Animancer::HybridAnimancerComponent::get_pivotWeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_pivotWeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Animancer::HybridAnimancerComponent::get_rootRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_rootRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_rootRotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_rootRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Animancer::HybridAnimancerComponent::get_rootPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_rootPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_rootPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_rootPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Animancer::HybridAnimancerComponent::get_angularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_angularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Animancer::HybridAnimancerComponent::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Animancer::HybridAnimancerComponent::get_deltaRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_deltaRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Animancer::HybridAnimancerComponent::get_deltaPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_deltaPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::ApplyBuiltinRootMotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"ApplyBuiltinRootMotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Animancer::HybridAnimancerComponent::get_feetPivotActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_feetPivotActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_feetPivotActive(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_feetPivotActive", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::HybridAnimancerComponent::get_stabilizeFeet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_stabilizeFeet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_stabilizeFeet(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_stabilizeFeet", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Animancer::HybridAnimancerComponent::get_rightFeetBottomHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_rightFeetBottomHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Animancer::HybridAnimancerComponent::get_leftFeetBottomHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_leftFeetBottomHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::CrossFade(int32_t  stateNameHash, float_t  fadeDuration, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"CrossFade", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, fadeDuration, layer, normalizedTime);
}
inline ::Animancer::AnimancerState* Animancer::HybridAnimancerComponent::CrossFade(::StringW  stateName, float_t  fadeDuration, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"CrossFade", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, stateName, fadeDuration, layer, normalizedTime);
}
inline void Animancer::HybridAnimancerComponent::CrossFadeInFixedTime(int32_t  stateNameHash, float_t  fadeDuration, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, fadeDuration, layer, fixedTime);
}
inline ::Animancer::AnimancerState* Animancer::HybridAnimancerComponent::CrossFadeInFixedTime(::StringW  stateName, float_t  fadeDuration, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"CrossFadeInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, stateName, fadeDuration, layer, fixedTime);
}
inline void Animancer::HybridAnimancerComponent::Play(int32_t  stateNameHash, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, layer, normalizedTime);
}
inline ::Animancer::AnimancerState* Animancer::HybridAnimancerComponent::Play(::StringW  stateName, int32_t  layer, float_t  normalizedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"Play", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, stateName, layer, normalizedTime);
}
inline void Animancer::HybridAnimancerComponent::PlayInFixedTime(int32_t  stateNameHash, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateNameHash, layer, fixedTime);
}
inline ::Animancer::AnimancerState* Animancer::HybridAnimancerComponent::PlayInFixedTime(::StringW  stateName, int32_t  layer, float_t  fixedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"PlayInFixedTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Animancer::AnimancerState*>(this, ___internal_method, stateName, layer, fixedTime);
}
inline bool Animancer::HybridAnimancerComponent::GetBool(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetBool", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline bool Animancer::HybridAnimancerComponent::GetBool(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetBool", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline void Animancer::HybridAnimancerComponent::SetBool(int32_t  id, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetBool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void Animancer::HybridAnimancerComponent::SetBool(::StringW  name, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetBool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline float_t Animancer::HybridAnimancerComponent::GetFloat(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetFloat", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline float_t Animancer::HybridAnimancerComponent::GetFloat(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetFloat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name);
}
inline void Animancer::HybridAnimancerComponent::SetFloat(int32_t  id, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void Animancer::HybridAnimancerComponent::SetFloat(::StringW  name, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline float_t Animancer::HybridAnimancerComponent::SetFloat(::StringW  name, float_t  value, float_t  dampTime, float_t  deltaTime, float_t  maxSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetFloat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, name, value, dampTime, deltaTime, maxSpeed);
}
inline float_t Animancer::HybridAnimancerComponent::SetFloat(int32_t  id, float_t  value, float_t  dampTime, float_t  deltaTime, float_t  maxSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetFloat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id, value, dampTime, deltaTime, maxSpeed);
}
inline int32_t Animancer::HybridAnimancerComponent::GetInteger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetInteger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline int32_t Animancer::HybridAnimancerComponent::GetInteger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetInteger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline void Animancer::HybridAnimancerComponent::SetInteger(int32_t  id, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetInteger", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline void Animancer::HybridAnimancerComponent::SetInteger(::StringW  name, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetInteger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void Animancer::HybridAnimancerComponent::SetTrigger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Animancer::HybridAnimancerComponent::SetTrigger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Animancer::HybridAnimancerComponent::ResetTrigger(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Animancer::HybridAnimancerComponent::ResetTrigger(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline bool Animancer::HybridAnimancerComponent::IsParameterControlledByCurve(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline bool Animancer::HybridAnimancerComponent::IsParameterControlledByCurve(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"IsParameterControlledByCurve", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline ::UnityEngine::AnimatorControllerParameter* Animancer::HybridAnimancerComponent::GetParameter(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetParameter", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorControllerParameter*>(this, ___internal_method, index);
}
inline int32_t Animancer::HybridAnimancerComponent::GetParameterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetParameterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::HybridAnimancerComponent::get_parameterCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_parameterCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::AnimatorControllerParameter*> Animancer::HybridAnimancerComponent::get_parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorControllerParameter*>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> Animancer::HybridAnimancerComponent::GetCurrentAnimatorClipInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(this, ___internal_method, layerIndex);
}
inline void Animancer::HybridAnimancerComponent::GetCurrentAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetCurrentAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, clips);
}
inline int32_t Animancer::HybridAnimancerComponent::GetCurrentAnimatorClipInfoCount(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetCurrentAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerIndex);
}
inline ::ArrayW<::UnityEngine::AnimatorClipInfo> Animancer::HybridAnimancerComponent::GetNextAnimatorClipInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AnimatorClipInfo>>(this, ___internal_method, layerIndex);
}
inline void Animancer::HybridAnimancerComponent::GetNextAnimatorClipInfo(int32_t  layerIndex, ::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*  clips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetNextAnimatorClipInfo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::AnimatorClipInfo>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, clips);
}
inline int32_t Animancer::HybridAnimancerComponent::GetNextAnimatorClipInfoCount(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetNextAnimatorClipInfoCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerIndex);
}
inline float_t Animancer::HybridAnimancerComponent::get_humanScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_humanScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Animancer::HybridAnimancerComponent::get_isHuman()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_isHuman", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Animancer::HybridAnimancerComponent::GetBoneTransform(::UnityEngine::HumanBodyBones  humanBoneId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetBoneTransform", {}, {::i2c::type_of<::UnityEngine::HumanBodyBones>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, humanBoneId);
}
inline void Animancer::HybridAnimancerComponent::SetBoneLocalRotation(::UnityEngine::HumanBodyBones  humanBoneId, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetBoneLocalRotation", {}, {::i2c::type_of<::UnityEngine::HumanBodyBones>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, humanBoneId, rotation);
}
inline int32_t Animancer::HybridAnimancerComponent::GetLayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetLayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::HybridAnimancerComponent::get_layerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_layerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Animancer::HybridAnimancerComponent::GetLayerIndex(::StringW  layerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetLayerIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, layerName);
}
inline ::StringW Animancer::HybridAnimancerComponent::GetLayerName(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetLayerName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, layerIndex);
}
inline float_t Animancer::HybridAnimancerComponent::GetLayerWeight(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetLayerWeight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, layerIndex);
}
inline void Animancer::HybridAnimancerComponent::SetLayerWeight(int32_t  layerIndex, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"SetLayerWeight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layerIndex, weight);
}
template<typename T>
inline T Animancer::HybridAnimancerComponent::GetBehaviour()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                    {"GetBehaviour", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Animancer::HybridAnimancerComponent::GetBehaviours()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                    {"GetBehaviours", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>> Animancer::HybridAnimancerComponent::GetBehaviours(int32_t  fullPathHash, int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetBehaviours", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::StateMachineBehaviour>>>(this, ___internal_method, fullPathHash, layerIndex);
}
inline ::UnityEngine::AnimatorStateInfo Animancer::HybridAnimancerComponent::GetCurrentAnimatorStateInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetCurrentAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(this, ___internal_method, layerIndex);
}
inline ::UnityEngine::AnimatorStateInfo Animancer::HybridAnimancerComponent::GetNextAnimatorStateInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetNextAnimatorStateInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorStateInfo>(this, ___internal_method, layerIndex);
}
inline bool Animancer::HybridAnimancerComponent::HasState(int32_t  layerIndex, int32_t  stateID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"HasState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerIndex, stateID);
}
inline bool Animancer::HybridAnimancerComponent::IsInTransition(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"IsInTransition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layerIndex);
}
inline ::UnityEngine::AnimatorTransitionInfo Animancer::HybridAnimancerComponent::GetAnimatorTransitionInfo(int32_t  layerIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"GetAnimatorTransitionInfo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorTransitionInfo>(this, ___internal_method, layerIndex);
}
inline ::UnityW<::UnityEngine::Avatar> Animancer::HybridAnimancerComponent::get_avatar()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_avatar", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Avatar>>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_avatar(::UnityEngine::Avatar*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_avatar", {}, {::i2c::type_of<::UnityEngine::Avatar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimatorCullingMode Animancer::HybridAnimancerComponent::get_cullingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_cullingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorCullingMode>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_cullingMode(::UnityEngine::AnimatorCullingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_cullingMode", {}, {::i2c::type_of<::UnityEngine::AnimatorCullingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::HybridAnimancerComponent::get_fireEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_fireEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_fireEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_fireEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::HybridAnimancerComponent::get_hasBoundPlayables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_hasBoundPlayables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::HybridAnimancerComponent::get_hasTransformHierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_hasTransformHierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::HybridAnimancerComponent::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::HybridAnimancerComponent::get_isOptimizable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_isOptimizable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Animancer::HybridAnimancerComponent::get_logWarnings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_logWarnings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_logWarnings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_logWarnings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimatorUpdateMode Animancer::HybridAnimancerComponent::get_updateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_updateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimatorUpdateMode>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_updateMode(::UnityEngine::AnimatorUpdateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_updateMode", {}, {::i2c::type_of<::UnityEngine::AnimatorUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Animancer::HybridAnimancerComponent::get_keepAnimatorStateOnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"get_keepAnimatorStateOnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::set_keepAnimatorStateOnDisable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"set_keepAnimatorStateOnDisable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::HybridAnimancerComponent::Rebind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {"Rebind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::HybridAnimancerComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::HybridAnimancerComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::HybridAnimancerComponent* Animancer::HybridAnimancerComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::HybridAnimancerComponent*>());
}
// Ctor Parameters []
constexpr ::Animancer::HybridAnimancerComponent::HybridAnimancerComponent()   {
}
