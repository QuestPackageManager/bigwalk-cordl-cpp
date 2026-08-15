#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerArms.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerArms_def.hpp"
#include "GlobalNamespace/zzzz__AudioEvent_def.hpp"
#include "GlobalNamespace/zzzz__AudioRTPC_def.hpp"
#include "GlobalNamespace/zzzz__IAudioRTPCXProvider_def.hpp"
#include "GlobalNamespace/zzzz__LimbSpline_def.hpp"
#include "GlobalNamespace/zzzz__PlayerArms_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "raisedness", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerArms_InputData::PlayerArms_InputData(float_t  raisedness) noexcept  {
this->raisedness = raisedness;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerArms_InputData::PlayerArms_InputData()   {
}
// Ctor Parameters [CppParam { name: "pivotPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftGripPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightGripPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerArms_PositionalData::PlayerArms_PositionalData(::UnityEngine::Vector3  pivotPosition, ::UnityEngine::Vector3  offset, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  leftGripPos, ::UnityEngine::Vector3  rightGripPos) noexcept  {
this->pivotPosition = pivotPosition;
this->offset = offset;
this->rotation = rotation;
this->leftGripPos = leftGripPos;
this->rightGripPos = rightGripPos;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerArms_PositionalData::PlayerArms_PositionalData()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.IAudioRTPCXProvider_get_XProviderIdentifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerArms::*)()>(&::GlobalNamespace::PlayerArms::IAudioRTPCXProvider_get_XProviderIdentifier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18045beb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"IAudioRTPCXProvider.get_XProviderIdentifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerArms::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1802ec810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)()>(&::GlobalNamespace::PlayerArms::LateUpdate)> {
  constexpr static std::size_t size = 0x1740;
  constexpr static std::size_t addrs = 0x18045bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.SetForHeldProp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)(::GlobalNamespace::Prop*, float_t)>(&::GlobalNamespace::PlayerArms::SetForHeldProp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18045e020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"SetForHeldProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.GetWindUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerArms::*)()>(&::GlobalNamespace::PlayerArms::GetWindUp)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18045bbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"GetWindUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.UpdateWindUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)()>(&::GlobalNamespace::PlayerArms::UpdateWindUp)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x18045eb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"UpdateWindUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.UpdateBobOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)()>(&::GlobalNamespace::PlayerArms::UpdateBobOffsets)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x18045e070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"UpdateBobOffsets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.BobOffsetSingleBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::PlayerArms::BobOffsetSingleBone)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18045b7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"BobOffsetSingleBone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.UpdateScreenSpaceArms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)()>(&::GlobalNamespace::PlayerArms::UpdateScreenSpaceArms)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x18045e810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"UpdateScreenSpaceArms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.ScreenSpacize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::PlayerArms::ScreenSpacize)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x18045de60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"ScreenSpacize", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.IAudioRTPCXProvider_GetX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerArms::*)(::GlobalNamespace::AudioRTPC_XAxisType, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerArms::IAudioRTPCXProvider_GetX)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18045bcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"IAudioRTPCXProvider.GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.PlaySwitchSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)()>(&::GlobalNamespace::PlayerArms::PlaySwitchSound)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18045d680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"PlaySwitchSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.LegIsBusyKicking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerArms::LegIsBusyKicking)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18045d600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"LegIsBusyKicking", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.BoneNeedsRetracting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::LayerMask)>(&::GlobalNamespace::PlayerArms::BoneNeedsRetracting)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18045b890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"BoneNeedsRetracting", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.ProcessRetraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)(::UnityEngine::Collider*, ::UnityEngine::Transform*)>(&::GlobalNamespace::PlayerArms::ProcessRetraction)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x18045d860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"ProcessRetraction", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms.ProcessRetractions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)(bool, bool)>(&::GlobalNamespace::PlayerArms::ProcessRetractions)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18045dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"ProcessRetractions", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerArms._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerArms::*)()>(&::GlobalNamespace::PlayerArms::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18045edc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerArms::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerArms::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerArms::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerArms::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerArms::__cordl_internal_get_localLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLeftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerArms::__cordl_internal_get_localLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLeftHand;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_localLeftHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localLeftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerArms::__cordl_internal_get_localRightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerArms::__cordl_internal_get_localRightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRightHand;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_localRightHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRightHand = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerArms::__cordl_internal_get_leftArmLimbSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmLimbSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerArms::__cordl_internal_get_leftArmLimbSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmLimbSpline;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_leftArmLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmLimbSpline = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerArms::__cordl_internal_get_rightArmLimbSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmLimbSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerArms::__cordl_internal_get_rightArmLimbSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmLimbSpline;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_rightArmLimbSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmLimbSpline = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerArms::__cordl_internal_get_localLeftArmSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLeftArmSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerArms::__cordl_internal_get_localLeftArmSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLeftArmSpline;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_localLeftArmSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localLeftArmSpline = value;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline>& GlobalNamespace::PlayerArms::__cordl_internal_get_localRightArmSpline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRightArmSpline;
}
constexpr ::UnityW<::GlobalNamespace::LimbSpline> const& GlobalNamespace::PlayerArms::__cordl_internal_get_localRightArmSpline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRightArmSpline;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_localRightArmSpline(::UnityW<::GlobalNamespace::LimbSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRightArmSpline = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerArms::__cordl_internal_get_holdRaisedGuide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdRaisedGuide;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerArms::__cordl_internal_get_holdRaisedGuide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdRaisedGuide;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_holdRaisedGuide(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdRaisedGuide = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_dragHandSmoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragHandSmoothTime;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_dragHandSmoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragHandSmoothTime;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_dragHandSmoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragHandSmoothTime = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_dragMaxFacingAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragMaxFacingAngle;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_dragMaxFacingAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragMaxFacingAngle;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_dragMaxFacingAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragMaxFacingAngle = value;
}
constexpr bool& GlobalNamespace::PlayerArms::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerArms::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_smoothHoldRaisedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothHoldRaisedness;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_smoothHoldRaisedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothHoldRaisedness;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_smoothHoldRaisedness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothHoldRaisedness = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerArms::__cordl_internal_get_stretchTranform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchTranform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerArms::__cordl_internal_get_stretchTranform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchTranform;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_stretchTranform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretchTranform = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get__prevWindup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevWindup;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get__prevWindup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevWindup;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set__prevWindup(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevWindup = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerArms::__cordl_internal_get__windUpAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windUpAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerArms::__cordl_internal_get__windUpAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windUpAudioEvent;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set__windUpAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windUpAudioEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerArms::__cordl_internal_get__stretchInAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stretchInAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerArms::__cordl_internal_get__stretchInAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stretchInAudioEvent;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set__stretchInAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stretchInAudioEvent = value;
}
constexpr ::GlobalNamespace::AudioEvent*& GlobalNamespace::PlayerArms::__cordl_internal_get__stretchOutAudioEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stretchOutAudioEvent;
}
constexpr ::GlobalNamespace::AudioEvent* const& GlobalNamespace::PlayerArms::__cordl_internal_get__stretchOutAudioEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stretchOutAudioEvent;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set__stretchOutAudioEvent(::GlobalNamespace::AudioEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stretchOutAudioEvent = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get__lastStretchDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStretchDistance;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get__lastStretchDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastStretchDistance;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set__lastStretchDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastStretchDistance = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get__stretchSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stretchSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get__stretchSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stretchSpeed;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set__stretchSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stretchSpeed = value;
}
constexpr bool& GlobalNamespace::PlayerArms::__cordl_internal_get__wasHoldingDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasHoldingDown;
}
constexpr bool const& GlobalNamespace::PlayerArms::__cordl_internal_get__wasHoldingDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasHoldingDown;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set__wasHoldingDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasHoldingDown = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerArms::__cordl_internal_get_retractionLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractionLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerArms::__cordl_internal_get_retractionLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retractionLayerMask;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_retractionLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retractionLayerMask = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerArms::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerArms::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_customHandnessLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHandnessLeft;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_customHandnessLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHandnessLeft;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_customHandnessLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customHandnessLeft = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_customHandVelLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHandVelLeft;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_customHandVelLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHandVelLeft;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_customHandVelLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customHandVelLeft = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_customHandnessRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHandnessRight;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_customHandnessRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHandnessRight;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_customHandnessRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customHandnessRight = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_customHandVelRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHandVelRight;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_customHandVelRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customHandVelRight;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_customHandVelRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customHandVelRight = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_switchHandnessLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchHandnessLeft;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_switchHandnessLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchHandnessLeft;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_switchHandnessLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switchHandnessLeft = value;
}
constexpr float_t& GlobalNamespace::PlayerArms::__cordl_internal_get_switchHandVelLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchHandVelLeft;
}
constexpr float_t const& GlobalNamespace::PlayerArms::__cordl_internal_get_switchHandVelLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchHandVelLeft;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_switchHandVelLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switchHandVelLeft = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerArms::__cordl_internal_get_holdingLeftHandPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingLeftHandPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerArms::__cordl_internal_get_holdingLeftHandPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingLeftHandPos;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_holdingLeftHandPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdingLeftHandPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerArms::__cordl_internal_get_holdingRightHandPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingRightHandPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerArms::__cordl_internal_get_holdingRightHandPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingRightHandPos;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_holdingRightHandPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdingRightHandPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerArms::__cordl_internal_get_switchLeftHandPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchLeftHandPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerArms::__cordl_internal_get_switchLeftHandPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchLeftHandPos;
}
constexpr void GlobalNamespace::PlayerArms::__cordl_internal_set_switchLeftHandPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switchLeftHandPos = value;
}
inline ::StringW GlobalNamespace::PlayerArms::IAudioRTPCXProvider_get_XProviderIdentifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"IAudioRTPCXProvider.get_XProviderIdentifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerArms::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerArms::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerArms::SetForHeldProp(::GlobalNamespace::Prop*  prop, float_t  raisedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"SetForHeldProp", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, raisedness);
}
inline float_t GlobalNamespace::PlayerArms::GetWindUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"GetWindUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerArms::UpdateWindUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"UpdateWindUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerArms::UpdateBobOffsets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"UpdateBobOffsets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerArms::BobOffsetSingleBone(::UnityEngine::Vector3  bobOffset, ::UnityEngine::Transform*  hand, float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"BobOffsetSingleBone", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bobOffset, hand, amount);
}
inline void GlobalNamespace::PlayerArms::UpdateScreenSpaceArms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"UpdateScreenSpaceArms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerArms::ScreenSpacize(::UnityEngine::Transform*  netueralTransform, ::UnityEngine::Transform*  cameraTransform, ::UnityEngine::Transform*  target, float_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"ScreenSpacize", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, netueralTransform, cameraTransform, target, amount);
}
inline bool GlobalNamespace::PlayerArms::IAudioRTPCXProvider_GetX(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"IAudioRTPCXProvider.GetX", {}, {::i2c::type_of<::GlobalNamespace::AudioRTPC_XAxisType>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, x);
}
inline void GlobalNamespace::PlayerArms::PlaySwitchSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"PlaySwitchSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerArms::LegIsBusyKicking(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"LegIsBusyKicking", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playerCharacter);
}
inline bool GlobalNamespace::PlayerArms::BoneNeedsRetracting(::UnityEngine::Collider*  bodyCollider, ::UnityEngine::Vector3  bonePosition, ::by_ref<::UnityEngine::Vector3>  retractPosition, ::UnityEngine::LayerMask  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"BoneNeedsRetracting", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bodyCollider, bonePosition, retractPosition, layerMask);
}
inline void GlobalNamespace::PlayerArms::ProcessRetraction(::UnityEngine::Collider*  bodyCollider, ::UnityEngine::Transform*  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"ProcessRetraction", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyCollider, bone);
}
inline void GlobalNamespace::PlayerArms::ProcessRetractions(bool  leftHandLocked, bool  rightHandLocked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {"ProcessRetractions", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHandLocked, rightHandLocked);
}
inline void GlobalNamespace::PlayerArms::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerArms*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerArms* GlobalNamespace::PlayerArms::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerArms*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr  GlobalNamespace::PlayerArms::operator ::GlobalNamespace::IAudioRTPCXProvider*() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAudioRTPCXProvider"
constexpr ::GlobalNamespace::IAudioRTPCXProvider* GlobalNamespace::PlayerArms::i___GlobalNamespace__IAudioRTPCXProvider() noexcept {
return static_cast<::GlobalNamespace::IAudioRTPCXProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerArms::PlayerArms()   {
}
