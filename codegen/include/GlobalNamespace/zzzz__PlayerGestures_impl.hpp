#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerGestures.hpp"
#include "GlobalNamespace/zzzz__PlayerActionState_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerGestures_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__FootstepAudioReferences_def.hpp"
#include "GlobalNamespace/zzzz__PlayerActionState_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerGestures_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerGestures_Handedness::PlayerGestures_Handedness(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGestures_Handedness::PlayerGestures_Handedness()   {
}
constexpr ::GlobalNamespace::PlayerGestures_Handedness  GlobalNamespace::PlayerGestures_Handedness::Left{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PlayerGestures_Handedness  GlobalNamespace::PlayerGestures_Handedness::Right{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "layerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "waveParam", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointParam", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "compressnessParam", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams::PlayerGestures_GestureArmParams(int32_t  layerIndex, ::StringW  waveParam, ::StringW  pointParam, ::StringW  compressnessParam) noexcept  {
this->layerIndex = layerIndex;
this->waveParam = waveParam;
this->pointParam = pointParam;
this->compressnessParam = compressnessParam;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams::PlayerGestures_GestureArmParams()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.get_LeftHandVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::get_LeftHandVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_LeftHandVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.get_RightHandVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::get_RightHandVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_RightHandVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.add_OnArmDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)(::System::Action*)>(&::GlobalNamespace::PlayerGestures::add_OnArmDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18046c340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"add_OnArmDown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.remove_OnArmDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)(::System::Action*)>(&::GlobalNamespace::PlayerGestures::remove_OnArmDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18046c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"remove_OnArmDown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.add_OnArmUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)(::System::Action*)>(&::GlobalNamespace::PlayerGestures::add_OnArmUp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18046c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"add_OnArmUp", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.remove_OnArmUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)(::System::Action*)>(&::GlobalNamespace::PlayerGestures::remove_OnArmUp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18046c640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"remove_OnArmUp", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.get_LeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::get_LeftHand)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18046c470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_LeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.get_RightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::get_RightHand)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18046c4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_RightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerGestures::Initialize)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x180469530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180469960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.UpdateSingleArm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)(::GlobalNamespace::PlayerGestures_GestureArmParams, bool, bool, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::PlayerGestures::UpdateSingleArm)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18046b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateSingleArm", {}, {::i2c::type_of<::GlobalNamespace::PlayerGestures_GestureArmParams>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::Update)> {
  constexpr static std::size_t size = 0x7b0;
  constexpr static std::size_t addrs = 0x18046bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.GetReachMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGestures::*)(::UnityEngine::Transform*, float_t, float_t, bool, ::by_ref<::UnityEngine::RaycastHit>)>(&::GlobalNamespace::PlayerGestures::GetReachMax)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x180468f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"GetReachMax", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.get_isHoldingRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::get_isHoldingRaised)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18046c590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_isHoldingRaised", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.UpdateSlidingSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)(::UnityEngine::RaycastHit, ::GlobalNamespace::PlayerActionState, bool, ::UnityEngine::Transform*, ::GlobalNamespace::PlayerGestures_Handedness, ::by_ref<float_t>, ::by_ref<bool>, ::by_ref<float_t>, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>, ::by_ref<::GlobalNamespace::SoundCue*>, ::by_ref<::GlobalNamespace::AudioSourceController*>)>(&::GlobalNamespace::PlayerGestures::UpdateSlidingSound)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x18046b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateSlidingSound", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::PlayerActionState>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::PlayerGestures_Handedness>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SoundCue*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AudioSourceController*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.SlideLGetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerGestures::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerGestures::SlideLGetX)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180469e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"SlideLGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.SlideRGetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerGestures::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerGestures::SlideRGetX)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180469e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"SlideRGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.UpdateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::UpdateAudio)> {
  constexpr static std::size_t size = 0xf00;
  constexpr static std::size_t addrs = 0x180469f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.RefreshHud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::RefreshHud)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x1804699d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"RefreshHud", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.get_isDoingEchoArms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::get_isDoingEchoArms)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18046c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_isDoingEchoArms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.UpdateHandVelocityL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::UpdateHandVelocityL)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18046ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateHandVelocityL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.UpdateHandVelocityR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::UpdateHandVelocityR)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18046af00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateHandVelocityR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.UpdateHandVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)(bool, ::GlobalNamespace::PlayerActionState, ::UnityEngine::Vector3, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerGestures::UpdateHandVelocity)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18046aff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateHandVelocity", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PlayerActionState>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.GetMovingVelocityL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::GetMovingVelocityL)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"GetMovingVelocityL", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.GetMovingVelocityR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::GetMovingVelocityR)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"GetMovingVelocityR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures.NoRoomForPropAboveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::NoRoomForPropAboveHead)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180469780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"NoRoomForPropAboveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerGestures::*)()>(&::GlobalNamespace::PlayerGestures::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18046c320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures._UpdateSlidingSound_g___clearRef_69_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerGestures*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::PlayerGestures::_UpdateSlidingSound_g___clearRef_69_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180469eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"<UpdateSlidingSound>g___clearRef|69_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerGestures*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerGestures._UpdateSlidingSound_g___clearRef_69_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PlayerGestures*, ::GlobalNamespace::AudioSourceController*)>(&::GlobalNamespace::PlayerGestures::_UpdateSlidingSound_g___clearRef_69_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804021b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"<UpdateSlidingSound>g___clearRef|69_1", {}, {::i2c::type_of<::GlobalNamespace::PlayerGestures*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get_waveSmoothtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveSmoothtime;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get_waveSmoothtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveSmoothtime;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_waveSmoothtime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waveSmoothtime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachOriginPointLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachOriginPointLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachOriginPointLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachOriginPointLeft;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachOriginPointLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachOriginPointLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachOriginPointRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachOriginPointRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachOriginPointRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachOriginPointRight;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachOriginPointRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachOriginPointRight = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachOriginAirplaneLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachOriginAirplaneLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachOriginAirplaneLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachOriginAirplaneLeft;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachOriginAirplaneLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachOriginAirplaneLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachOriginAirplaneRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachOriginAirplaneRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachOriginAirplaneRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachOriginAirplaneRight;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachOriginAirplaneRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachOriginAirplaneRight = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachPointMaxUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachPointMaxUp;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachPointMaxUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachPointMaxUp;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachPointMaxUp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachPointMaxUp = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachPointMaxDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachPointMaxDown;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachPointMaxDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachPointMaxDown;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachPointMaxDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachPointMaxDown = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachPointMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachPointMin;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachPointMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachPointMin;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachPointMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachPointMin = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachAirplaneMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachAirplaneMax;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachAirplaneMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachAirplaneMax;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachAirplaneMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachAirplaneMax = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachAirplaneMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachAirplaneMin;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachAirplaneMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachAirplaneMin;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachAirplaneMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachAirplaneMin = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerGestures::__cordl_internal_get_reachMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachMask;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_reachMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachMask = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerGestures::__cordl_internal_get_raiseMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerGestures::__cordl_internal_get_raiseMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseMask;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_raiseMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raiseMask = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get_raiseCastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseCastDistance;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get_raiseCastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raiseCastDistance;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_raiseCastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raiseCastDistance = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get_ignoreReachCastingLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreReachCastingLeft;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get_ignoreReachCastingLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreReachCastingLeft;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_ignoreReachCastingLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreReachCastingLeft = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get_ignoreReachCastingRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreReachCastingRight;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get_ignoreReachCastingRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreReachCastingRight;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_ignoreReachCastingRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreReachCastingRight = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get_drawDebugRays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawDebugRays;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get_drawDebugRays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawDebugRays;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_drawDebugRays(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawDebugRays = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftArmWasPointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftArmWasPointing;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftArmWasPointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftArmWasPointing;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__leftArmWasPointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftArmWasPointing = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightArmWasPointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightArmWasPointing;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightArmWasPointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightArmWasPointing;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__rightArmWasPointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightArmWasPointing = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerGestures::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerGestures::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams& GlobalNamespace::PlayerGestures::__cordl_internal_get_leftArmParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmParams;
}
constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams const& GlobalNamespace::PlayerGestures::__cordl_internal_get_leftArmParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmParams;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_leftArmParams(::GlobalNamespace::PlayerGestures_GestureArmParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmParams = value;
}
constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams& GlobalNamespace::PlayerGestures::__cordl_internal_get_rightArmParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmParams;
}
constexpr ::GlobalNamespace::PlayerGestures_GestureArmParams const& GlobalNamespace::PlayerGestures::__cordl_internal_get_rightArmParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmParams;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_rightArmParams(::GlobalNamespace::PlayerGestures_GestureArmParams  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmParams = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get_leftArmPointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmPointing;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get_leftArmPointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmPointing;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_leftArmPointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmPointing = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get_rightArmPointing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmPointing;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get_rightArmPointing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmPointing;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_rightArmPointing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmPointing = value;
}
constexpr ::GlobalNamespace::PlayerActionState& GlobalNamespace::PlayerGestures::__cordl_internal_get_leftArmWavingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmWavingState;
}
constexpr ::GlobalNamespace::PlayerActionState const& GlobalNamespace::PlayerGestures::__cordl_internal_get_leftArmWavingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmWavingState;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_leftArmWavingState(::GlobalNamespace::PlayerActionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmWavingState = value;
}
constexpr ::GlobalNamespace::PlayerActionState& GlobalNamespace::PlayerGestures::__cordl_internal_get_rightArmWavingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmWavingState;
}
constexpr ::GlobalNamespace::PlayerActionState const& GlobalNamespace::PlayerGestures::__cordl_internal_get_rightArmWavingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmWavingState;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_rightArmWavingState(::GlobalNamespace::PlayerActionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmWavingState = value;
}
constexpr ::GlobalNamespace::PlayerActionState& GlobalNamespace::PlayerGestures::__cordl_internal_get_sharedArmWavingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedArmWavingState;
}
constexpr ::GlobalNamespace::PlayerActionState const& GlobalNamespace::PlayerGestures::__cordl_internal_get_sharedArmWavingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sharedArmWavingState;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_sharedArmWavingState(::GlobalNamespace::PlayerActionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sharedArmWavingState = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get_wasHoldingProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHoldingProp;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get_wasHoldingProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHoldingProp;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_wasHoldingProp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHoldingProp = value;
}
constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences>& GlobalNamespace::PlayerGestures::__cordl_internal_get__footstepSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____footstepSounds;
}
constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences> const& GlobalNamespace::PlayerGestures::__cordl_internal_get__footstepSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____footstepSounds;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__footstepSounds(::UnityW<::GlobalNamespace::FootstepAudioReferences>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____footstepSounds = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PlayerGestures::__cordl_internal_get__currentSlideSoundL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSlideSoundL;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PlayerGestures::__cordl_internal_get__currentSlideSoundL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSlideSoundL;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__currentSlideSoundL(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSlideSoundL = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue>& GlobalNamespace::PlayerGestures::__cordl_internal_get__currentSlideSoundR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSlideSoundR;
}
constexpr ::UnityW<::GlobalNamespace::SoundCue> const& GlobalNamespace::PlayerGestures::__cordl_internal_get__currentSlideSoundR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSlideSoundR;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__currentSlideSoundR(::UnityW<::GlobalNamespace::SoundCue>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSlideSoundR = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::PlayerGestures::__cordl_internal_get__slideASCL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideASCL;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::PlayerGestures::__cordl_internal_get__slideASCL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideASCL;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__slideASCL(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slideASCL = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& GlobalNamespace::PlayerGestures::__cordl_internal_get__slideASCR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideASCR;
}
constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& GlobalNamespace::PlayerGestures::__cordl_internal_get__slideASCR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideASCR;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__slideASCR(::UnityW<::GlobalNamespace::AudioSourceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slideASCR = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftHandVelocityAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandVelocityAudio;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftHandVelocityAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandVelocityAudio;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__leftHandVelocityAudio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandVelocityAudio = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightHandVelocityAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandVelocityAudio;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightHandVelocityAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandVelocityAudio;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__rightHandVelocityAudio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandVelocityAudio = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftWasHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftWasHit;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftWasHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftWasHit;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__leftWasHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftWasHit = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightWasHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightWasHit;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightWasHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightWasHit;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__rightWasHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightWasHit = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get__locking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locking;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get__locking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locking;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__locking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locking = value;
}
constexpr bool& GlobalNamespace::PlayerGestures::__cordl_internal_get__locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locked;
}
constexpr bool const& GlobalNamespace::PlayerGestures::__cordl_internal_get__locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locked;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locked = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerGestures::__cordl_internal_get__lockingAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockingAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerGestures::__cordl_internal_get__lockingAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockingAudioEvent;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__lockingAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockingAudioEvent = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftHandPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandPosition;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftHandPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandPosition;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__leftHandPosition(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandPosition = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightHandPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandPosition;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightHandPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandPosition;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__rightHandPosition(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandPosition = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftHandVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get__leftHandVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHandVelocity;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__leftHandVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHandVelocity = value;
}
constexpr float_t& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightHandVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerGestures::__cordl_internal_get__rightHandVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHandVelocity;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set__rightHandVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHandVelocity = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerGestures::__cordl_internal_get_OnArmDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnArmDown;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerGestures::__cordl_internal_get_OnArmDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnArmDown;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_OnArmDown(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnArmDown = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerGestures::__cordl_internal_get_OnArmUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnArmUp;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerGestures::__cordl_internal_get_OnArmUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnArmUp;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_OnArmUp(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnArmUp = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::PlayerGestures::__cordl_internal_get_hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::PlayerGestures::__cordl_internal_get_hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hits = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::PlayerGestures::__cordl_internal_get_hit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::PlayerGestures::__cordl_internal_get_hit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr void GlobalNamespace::PlayerGestures::__cordl_internal_set_hit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hit = value;
}
inline float_t GlobalNamespace::PlayerGestures::get_LeftHandVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_LeftHandVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerGestures::get_RightHandVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_RightHandVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::add_OnArmDown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"add_OnArmDown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerGestures::remove_OnArmDown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"remove_OnArmDown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerGestures::add_OnArmUp(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"add_OnArmUp", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerGestures::remove_OnArmUp(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"remove_OnArmUp", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PlayerGestures::get_LeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_LeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::PlayerGestures::get_RightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_RightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerGestures::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::UpdateSingleArm(::GlobalNamespace::PlayerGestures_GestureArmParams  gestureArmParams, bool  isWaving, bool  isPointing, ::UnityEngine::Transform*  pointOrigin, ::UnityEngine::Transform*  airplaneOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateSingleArm", {}, {::i2c::type_of<::GlobalNamespace::PlayerGestures_GestureArmParams>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gestureArmParams, isWaving, isPointing, pointOrigin, airplaneOrigin);
}
inline void GlobalNamespace::PlayerGestures::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerGestures::GetReachMax(::UnityEngine::Transform*  origin, float_t  min, float_t  max, bool  drawDebugRays, ::by_ref<::UnityEngine::RaycastHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"GetReachMax", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, origin, min, max, drawDebugRays, hit);
}
inline bool GlobalNamespace::PlayerGestures::get_isHoldingRaised()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_isHoldingRaised", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::UpdateSlidingSound(::UnityEngine::RaycastHit  hitInfo, ::GlobalNamespace::PlayerActionState  armWavingState, bool  armPointing, ::UnityEngine::Transform*  handTForm, ::GlobalNamespace::PlayerGestures_Handedness  handedness, ::by_ref<float_t>  velocity, ::by_ref<bool>  wasHit, ::by_ref<float_t>  velocityAudio, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  handPos, ::by_ref<::GlobalNamespace::SoundCue*>  currentSlideSound, ::by_ref<::GlobalNamespace::AudioSourceController*>  slideASC)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateSlidingSound", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::GlobalNamespace::PlayerActionState>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::PlayerGestures_Handedness>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SoundCue*>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::AudioSourceController*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitInfo, armWavingState, armPointing, handTForm, handedness, velocity, wasHit, velocityAudio, handPos, currentSlideSound, slideASC);
}
inline bool GlobalNamespace::PlayerGestures::SlideLGetX(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"SlideLGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline bool GlobalNamespace::PlayerGestures::SlideRGetX(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"SlideRGetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline void GlobalNamespace::PlayerGestures::UpdateAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::RefreshHud()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"RefreshHud", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerGestures::get_isDoingEchoArms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"get_isDoingEchoArms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::UpdateHandVelocityL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateHandVelocityL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::UpdateHandVelocityR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateHandVelocityR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::UpdateHandVelocity(bool  armPointing, ::GlobalNamespace::PlayerActionState  armWavingState, ::UnityEngine::Vector3  newHandPosition, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  handPos, ::by_ref<float_t>  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"UpdateHandVelocity", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::PlayerActionState>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, armPointing, armWavingState, newHandPosition, handPos, velocity);
}
inline float_t GlobalNamespace::PlayerGestures::GetMovingVelocityL()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"GetMovingVelocityL", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerGestures::GetMovingVelocityR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"GetMovingVelocityR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerGestures::NoRoomForPropAboveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"NoRoomForPropAboveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerGestures::_UpdateSlidingSound_g___clearRef_69_0(::GlobalNamespace::PlayerGestures*  g, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"<UpdateSlidingSound>g___clearRef|69_0", {}, {::i2c::type_of<::GlobalNamespace::PlayerGestures*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, c);
}
inline void GlobalNamespace::PlayerGestures::_UpdateSlidingSound_g___clearRef_69_1(::GlobalNamespace::PlayerGestures*  g, ::GlobalNamespace::AudioSourceController*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerGestures*>(),
                        {"<UpdateSlidingSound>g___clearRef|69_1", {}, {::i2c::type_of<::GlobalNamespace::PlayerGestures*>(), ::i2c::type_of<::GlobalNamespace::AudioSourceController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, g, c);
}
inline ::GlobalNamespace::PlayerGestures* GlobalNamespace::PlayerGestures::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerGestures*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerGestures::PlayerGestures()   {
}
