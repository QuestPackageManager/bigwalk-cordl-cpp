#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPose.hpp"
#include "GlobalNamespace/zzzz__PlayerColliderState_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_impl.hpp"
#include "GlobalNamespace/zzzz__PropGroup_impl.hpp"
#include "GlobalNamespace/zzzz__SeaShell_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioScatterContainer_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "LobbyNetworking/zzzz__ITicketed_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "mask", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerPose_LimitOverride::PlayerPose_LimitOverride(bool  mask, float_t  value) noexcept  {
this->mask = mask;
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPose_LimitOverride::PlayerPose_LimitOverride()   {
}
// Ctor Parameters [CppParam { name: "leftLimit", ty: "::GlobalNamespace::PlayerPose_LimitOverride", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightLimit", ty: "::GlobalNamespace::PlayerPose_LimitOverride", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerPose_LeftRightLimits::PlayerPose_LeftRightLimits(::GlobalNamespace::PlayerPose_LimitOverride  leftLimit, ::GlobalNamespace::PlayerPose_LimitOverride  rightLimit) noexcept  {
this->leftLimit = leftLimit;
this->rightLimit = rightLimit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPose_LeftRightLimits::PlayerPose_LeftRightLimits()   {
}
// Ctor Parameters [CppParam { name: "PropGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: Some("{}") }, CppParam { name: "limits", ty: "::GlobalNamespace::PlayerPose_LeftRightLimits", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerPose_TaggedPropLimits::PlayerPose_TaggedPropLimits(::GlobalNamespace::PropGroup  PropGroup, ::GlobalNamespace::PlayerPose_LeftRightLimits  limits) noexcept  {
this->PropGroup = PropGroup;
this->limits = limits;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPose_TaggedPropLimits::PlayerPose_TaggedPropLimits()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerPose.Evict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPose::*)()>(&::GlobalNamespace::PlayerPose::Evict)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18037ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"Evict", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPose.get_eyeMoodRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerEyeMood (::GlobalNamespace::PlayerPose::*)()>(&::GlobalNamespace::PlayerPose::get_eyeMoodRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180380100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"get_eyeMoodRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPose.GetLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerPose_LeftRightLimits (::GlobalNamespace::PlayerPose::*)(::GlobalNamespace::Prop*)>(&::GlobalNamespace::PlayerPose::GetLimits)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18037ffd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"GetLimits", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPose.get_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::GlobalNamespace::PlayerPose::*)()>(&::GlobalNamespace::PlayerPose::get_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180380110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"get_ticket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPose.set_ticket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPose::*)(uint16_t)>(&::GlobalNamespace::PlayerPose::set_ticket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180380120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPose.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPose::*)()>(&::GlobalNamespace::PlayerPose::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180380090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPose.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPose::*)()>(&::GlobalNamespace::PlayerPose::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180380080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPose::*)()>(&::GlobalNamespace::PlayerPose::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803800f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerPose::__cordl_internal_get_animatorPoseId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorPoseId;
}
constexpr int32_t const& GlobalNamespace::PlayerPose::__cordl_internal_get_animatorPoseId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorPoseId;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_animatorPoseId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatorPoseId = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_noCrouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noCrouching;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_noCrouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noCrouching;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_noCrouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noCrouching = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_noHolding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noHolding;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_noHolding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noHolding;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_noHolding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noHolding = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_entryIsBlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryIsBlocked;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_entryIsBlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryIsBlocked;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_entryIsBlocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryIsBlocked = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_allowSitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowSitting;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_allowSitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowSitting;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_allowSitting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowSitting = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_emptyAllPockets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyAllPockets;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_emptyAllPockets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyAllPockets;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_emptyAllPockets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyAllPockets = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_emptyNonBlindfoldPockets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyNonBlindfoldPockets;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_emptyNonBlindfoldPockets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyNonBlindfoldPockets;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_emptyNonBlindfoldPockets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyNonBlindfoldPockets = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_hasFootsteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFootsteps;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_hasFootsteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasFootsteps;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_hasFootsteps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasFootsteps = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_noPlacingOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noPlacingOthers;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_noPlacingOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noPlacingOthers;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_noPlacingOthers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noPlacingOthers = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_allowKicking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowKicking;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_allowKicking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowKicking;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_allowKicking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowKicking = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_useFullRetractions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useFullRetractions;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_useFullRetractions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useFullRetractions;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_useFullRetractions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useFullRetractions = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerPose::__cordl_internal_get_chosenPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chosenPlayer;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerPose::__cordl_internal_get_chosenPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chosenPlayer;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_chosenPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chosenPlayer = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_leaveIfNotUpright()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveIfNotUpright;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_leaveIfNotUpright() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveIfNotUpright;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_leaveIfNotUpright(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaveIfNotUpright = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_leaveWithUseAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveWithUseAction;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_leaveWithUseAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveWithUseAction;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_leaveWithUseAction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaveWithUseAction = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_leaveWithJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveWithJump;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_leaveWithJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leaveWithJump;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_leaveWithJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leaveWithJump = value;
}
constexpr ::GlobalNamespace::PlayerEyeMood& GlobalNamespace::PlayerPose::__cordl_internal_get_eyeMood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeMood;
}
constexpr ::GlobalNamespace::PlayerEyeMood const& GlobalNamespace::PlayerPose::__cordl_internal_get_eyeMood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeMood;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_eyeMood(::GlobalNamespace::PlayerEyeMood  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeMood = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_hasDifferentRightEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDifferentRightEye;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_hasDifferentRightEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasDifferentRightEye;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_hasDifferentRightEye(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasDifferentRightEye = value;
}
constexpr ::GlobalNamespace::PlayerEyeMood& GlobalNamespace::PlayerPose::__cordl_internal_get_seperateRightEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seperateRightEye;
}
constexpr ::GlobalNamespace::PlayerEyeMood const& GlobalNamespace::PlayerPose::__cordl_internal_get_seperateRightEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seperateRightEye;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_seperateRightEye(::GlobalNamespace::PlayerEyeMood  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seperateRightEye = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerPose::__cordl_internal_get_cameraOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerPose::__cordl_internal_get_cameraOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffset;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_cameraOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerPose::__cordl_internal_get_cameraOffsetCrouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffsetCrouching;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerPose::__cordl_internal_get_cameraOffsetCrouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffsetCrouching;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_cameraOffsetCrouching(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraOffsetCrouching = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_noCameraDampening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noCameraDampening;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_noCameraDampening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noCameraDampening;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_noCameraDampening(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noCameraDampening = value;
}
constexpr ::GlobalNamespace::PlayerPose_LeftRightLimits& GlobalNamespace::PlayerPose::__cordl_internal_get_defaultPropLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPropLimits;
}
constexpr ::GlobalNamespace::PlayerPose_LeftRightLimits const& GlobalNamespace::PlayerPose::__cordl_internal_get_defaultPropLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPropLimits;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_defaultPropLimits(::GlobalNamespace::PlayerPose_LeftRightLimits  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultPropLimits = value;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerPose_TaggedPropLimits>& GlobalNamespace::PlayerPose::__cordl_internal_get_taggedPropLimits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedPropLimits;
}
constexpr ::ArrayW<::GlobalNamespace::PlayerPose_TaggedPropLimits> const& GlobalNamespace::PlayerPose::__cordl_internal_get_taggedPropLimits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedPropLimits;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_taggedPropLimits(::ArrayW<::GlobalNamespace::PlayerPose_TaggedPropLimits>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taggedPropLimits = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PlayerPose::__cordl_internal_get_onEnterSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PlayerPose::__cordl_internal_get_onEnterSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterSwitch;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_onEnterSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnterSwitch = value;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& GlobalNamespace::PlayerPose::__cordl_internal_get_onExitSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExitSwitch;
}
constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& GlobalNamespace::PlayerPose::__cordl_internal_get_onExitSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExitSwitch;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_onExitSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onExitSwitch = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerPose::__cordl_internal_get_onEnterAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterAction;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerPose::__cordl_internal_get_onEnterAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnterAction;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_onEnterAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnterAction = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PlayerPose::__cordl_internal_get_directSystemControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directSystemControl;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PlayerPose::__cordl_internal_get_directSystemControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directSystemControl;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_directSystemControl(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directSystemControl = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerPose::__cordl_internal_get_localBumOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerPose::__cordl_internal_get_localBumOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOffset;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_localBumOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localBumOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerPose::__cordl_internal_get_localBumOffsetSitting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOffsetSitting;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerPose::__cordl_internal_get_localBumOffsetSitting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localBumOffsetSitting;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_localBumOffsetSitting(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localBumOffsetSitting = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_hasCustomColliderState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomColliderState;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_hasCustomColliderState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomColliderState;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_hasCustomColliderState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCustomColliderState = value;
}
constexpr ::GlobalNamespace::PlayerColliderState& GlobalNamespace::PlayerPose::__cordl_internal_get_colliderState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderState;
}
constexpr ::GlobalNamespace::PlayerColliderState const& GlobalNamespace::PlayerPose::__cordl_internal_get_colliderState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderState;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_colliderState(::GlobalNamespace::PlayerColliderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderState = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_hasCustomCrouchingColliderState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomCrouchingColliderState;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_hasCustomCrouchingColliderState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomCrouchingColliderState;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_hasCustomCrouchingColliderState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCustomCrouchingColliderState = value;
}
constexpr ::GlobalNamespace::PlayerColliderState& GlobalNamespace::PlayerPose::__cordl_internal_get_crouchingColliderState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchingColliderState;
}
constexpr ::GlobalNamespace::PlayerColliderState const& GlobalNamespace::PlayerPose::__cordl_internal_get_crouchingColliderState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchingColliderState;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_crouchingColliderState(::GlobalNamespace::PlayerColliderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchingColliderState = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_hasCustomSittingColliderState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomSittingColliderState;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_hasCustomSittingColliderState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomSittingColliderState;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_hasCustomSittingColliderState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCustomSittingColliderState = value;
}
constexpr ::GlobalNamespace::PlayerColliderState& GlobalNamespace::PlayerPose::__cordl_internal_get_sittingColliderState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingColliderState;
}
constexpr ::GlobalNamespace::PlayerColliderState const& GlobalNamespace::PlayerPose::__cordl_internal_get_sittingColliderState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingColliderState;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_sittingColliderState(::GlobalNamespace::PlayerColliderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sittingColliderState = value;
}
constexpr ::StringW& GlobalNamespace::PlayerPose::__cordl_internal_get_audioIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioIdentifier;
}
constexpr ::StringW const& GlobalNamespace::PlayerPose::__cordl_internal_get_audioIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioIdentifier;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_audioIdentifier(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioIdentifier = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerPose::__cordl_internal_get_enterSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerPose::__cordl_internal_get_enterSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterSound;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_enterSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerPose::__cordl_internal_get_exitSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerPose::__cordl_internal_get_exitSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitSound;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_exitSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerPose::__cordl_internal_get_slideSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerPose::__cordl_internal_get_slideSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slideSound;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_slideSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slideSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::PlayerPose::__cordl_internal_get_dropSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::PlayerPose::__cordl_internal_get_dropSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropSound;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_dropSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropSound = value;
}
constexpr bool& GlobalNamespace::PlayerPose::__cordl_internal_get_legWiggleSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legWiggleSound;
}
constexpr bool const& GlobalNamespace::PlayerPose::__cordl_internal_get_legWiggleSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___legWiggleSound;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_legWiggleSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___legWiggleSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& GlobalNamespace::PlayerPose::__cordl_internal_get_idleSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& GlobalNamespace::PlayerPose::__cordl_internal_get_idleSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleSound;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_idleSound(::UnityW<::GlobalNamespace::AudioScatterContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleSound = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerPose::__cordl_internal_get_occupant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occupant;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerPose::__cordl_internal_get_occupant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occupant;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_occupant(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occupant = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerPose::__cordl_internal_get_isCarryPoseOfCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCarryPoseOfCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerPose::__cordl_internal_get_isCarryPoseOfCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCarryPoseOfCharacter;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_isCarryPoseOfCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCarryPoseOfCharacter = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::PlayerPose::__cordl_internal_get_parentProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentProp;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::PlayerPose::__cordl_internal_get_parentProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentProp;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_parentProp(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentProp = value;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference& GlobalNamespace::PlayerPose::__cordl_internal_get_shellReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shellReference;
}
constexpr ::GlobalNamespace::SeaShell_ShellReference const& GlobalNamespace::PlayerPose::__cordl_internal_get_shellReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shellReference;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set_shellReference(::GlobalNamespace::SeaShell_ShellReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shellReference = value;
}
constexpr uint16_t& GlobalNamespace::PlayerPose::__cordl_internal_get__ticket_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr uint16_t const& GlobalNamespace::PlayerPose::__cordl_internal_get__ticket_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ticket_k__BackingField;
}
constexpr void GlobalNamespace::PlayerPose::__cordl_internal_set__ticket_k__BackingField(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ticket_k__BackingField = value;
}
inline void GlobalNamespace::PlayerPose::Evict()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"Evict", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerEyeMood GlobalNamespace::PlayerPose::get_eyeMoodRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"get_eyeMoodRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerEyeMood>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerPose_LeftRightLimits GlobalNamespace::PlayerPose::GetLimits(::GlobalNamespace::Prop*  prop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"GetLimits", {}, {::i2c::type_of<::GlobalNamespace::Prop*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerPose_LeftRightLimits>(this, ___internal_method, prop);
}
inline uint16_t GlobalNamespace::PlayerPose::get_ticket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"get_ticket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerPose::set_ticket(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"set_ticket", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerPose::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerPose::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerPose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPose*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerPose* GlobalNamespace::PlayerPose::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerPose*>());
}
/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr  GlobalNamespace::PlayerPose::operator ::LobbyNetworking::ITicketed*() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* GlobalNamespace::PlayerPose::i___LobbyNetworking__ITicketed() noexcept {
return static_cast<::LobbyNetworking::ITicketed*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPose::PlayerPose()   {
}
