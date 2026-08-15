#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCroucher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCroucher_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPose_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.get_isCrouchingAuthorative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::get_isCrouchingAuthorative)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180465080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"get_isCrouchingAuthorative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.get_authoritiveTrueCrouchness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::get_authoritiveTrueCrouchness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180465020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"get_authoritiveTrueCrouchness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.add_OnCrouchDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)(::System::Action*)>(&::GlobalNamespace::PlayerCroucher::add_OnCrouchDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180464f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"add_OnCrouchDown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.remove_OnCrouchDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)(::System::Action*)>(&::GlobalNamespace::PlayerCroucher::remove_OnCrouchDown)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804650f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"remove_OnCrouchDown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.add_OnCrouchUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)(::System::Action*)>(&::GlobalNamespace::PlayerCroucher::add_OnCrouchUp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180464f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"add_OnCrouchUp", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.remove_OnCrouchUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)(::System::Action*)>(&::GlobalNamespace::PlayerCroucher::remove_OnCrouchUp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180465180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"remove_OnCrouchUp", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerCroucher::Initialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180464ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.UpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::UpdateLocal)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x180464ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"UpdateLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.UpdateFromBasics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::UpdateFromBasics)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x1804647e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"UpdateFromBasics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.GetMinCrouchness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::GetMinCrouchness)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x180463880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"GetMinCrouchness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.CanPlayersFitAboveMe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCroucher::*)(int32_t)>(&::GlobalNamespace::PlayerCroucher::CanPlayersFitAboveMe)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180463660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"CanPlayersFitAboveMe", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerCroucher::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180463a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"OnDrawGizmosSelected", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.UpdateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::UpdateAudio)> {
  constexpr static std::size_t size = 0xcb0;
  constexpr static std::size_t addrs = 0x180463b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"UpdateAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher.ClearToggles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::ClearToggles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180463870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"ClearToggles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCroucher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCroucher::*)()>(&::GlobalNamespace::PlayerCroucher::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180464ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerCroucher::__cordl_internal_get_pc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_pc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_crouchSmoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchSmoothTime;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_crouchSmoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchSmoothTime;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_crouchSmoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchSmoothTime = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_crouchCameraOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchCameraOffset;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_crouchCameraOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchCameraOffset;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_crouchCameraOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchCameraOffset = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_cheatCameraOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatCameraOffset;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_cheatCameraOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cheatCameraOffset;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_cheatCameraOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cheatCameraOffset = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_localTrueCrouchness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localTrueCrouchness;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_localTrueCrouchness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localTrueCrouchness;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_localTrueCrouchness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localTrueCrouchness = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::PlayerCroucher::__cordl_internal_get_mainCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_mainCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCollider;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_mainCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCollider = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_colliderHeightDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderHeightDelta;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_colliderHeightDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderHeightDelta;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_colliderHeightDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderHeightDelta = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_originalColliderHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalColliderHeight;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_originalColliderHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalColliderHeight;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_originalColliderHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalColliderHeight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerCroucher::__cordl_internal_get_originalColliderCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalColliderCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_originalColliderCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalColliderCenter;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_originalColliderCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalColliderCenter = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerCroucher::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_fullCastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullCastDistance;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_fullCastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullCastDistance;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_fullCastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullCastDistance = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_crouchOnlyDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchOnlyDistance;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_crouchOnlyDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchOnlyDistance;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_crouchOnlyDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchOnlyDistance = value;
}
constexpr bool& GlobalNamespace::PlayerCroucher::__cordl_internal_get_drawDebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawDebug;
}
constexpr bool const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_drawDebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawDebug;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_drawDebug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawDebug = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get__prevCrouchness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevCrouchness;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get__prevCrouchness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevCrouchness;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set__prevCrouchness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevCrouchness = value;
}
constexpr bool& GlobalNamespace::PlayerCroucher::__cordl_internal_get__playedGrabSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playedGrabSound;
}
constexpr bool const& GlobalNamespace::PlayerCroucher::__cordl_internal_get__playedGrabSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playedGrabSound;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set__playedGrabSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playedGrabSound = value;
}
constexpr bool& GlobalNamespace::PlayerCroucher::__cordl_internal_get_crouchIsToggledOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchIsToggledOn;
}
constexpr bool const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_crouchIsToggledOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crouchIsToggledOn;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_crouchIsToggledOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crouchIsToggledOn = value;
}
constexpr int32_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_menuBlockFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuBlockFrames;
}
constexpr int32_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_menuBlockFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuBlockFrames;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_menuBlockFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menuBlockFrames = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_smoothPoseness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothPoseness;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_smoothPoseness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothPoseness;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_smoothPoseness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothPoseness = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_posenessVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___posenessVel;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_posenessVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___posenessVel;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_posenessVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___posenessVel = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose>& GlobalNamespace::PlayerCroucher::__cordl_internal_get_lastPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPose;
}
constexpr ::UnityW<::GlobalNamespace::PlayerPose> const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_lastPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPose;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_lastPose(::UnityW<::GlobalNamespace::PlayerPose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPose = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_smoothedCrouchness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedCrouchness;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_smoothedCrouchness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedCrouchness;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_smoothedCrouchness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothedCrouchness = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_smoothedCrouchnessVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedCrouchnessVel;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_smoothedCrouchnessVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedCrouchnessVel;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_smoothedCrouchnessVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothedCrouchnessVel = value;
}
constexpr float_t& GlobalNamespace::PlayerCroucher::__cordl_internal_get_colliderCompressness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderCompressness;
}
constexpr float_t const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_colliderCompressness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderCompressness;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_colliderCompressness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderCompressness = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerCroucher::__cordl_internal_get_OnCrouchDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCrouchDown;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_OnCrouchDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCrouchDown;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_OnCrouchDown(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCrouchDown = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerCroucher::__cordl_internal_get_OnCrouchUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCrouchUp;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_OnCrouchUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCrouchUp;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_OnCrouchUp(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCrouchUp = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::PlayerCroucher::__cordl_internal_get_hit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::PlayerCroucher::__cordl_internal_get_hit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr void GlobalNamespace::PlayerCroucher::__cordl_internal_set_hit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hit = value;
}
inline bool GlobalNamespace::PlayerCroucher::get_isCrouchingAuthorative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"get_isCrouchingAuthorative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerCroucher::get_authoritiveTrueCrouchness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"get_authoritiveTrueCrouchness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCroucher::add_OnCrouchDown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"add_OnCrouchDown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerCroucher::remove_OnCrouchDown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"remove_OnCrouchDown", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerCroucher::add_OnCrouchUp(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"add_OnCrouchUp", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerCroucher::remove_OnCrouchUp(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"remove_OnCrouchUp", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerCroucher::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerCroucher::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCroucher::UpdateLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"UpdateLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCroucher::UpdateFromBasics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"UpdateFromBasics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerCroucher::GetMinCrouchness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"GetMinCrouchness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerCroucher::CanPlayersFitAboveMe(int32_t  howManyPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"CanPlayersFitAboveMe", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, howManyPlayers);
}
inline void GlobalNamespace::PlayerCroucher::OnDrawGizmosSelected(::GlobalNamespace::PlayerCharacter*  pc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"OnDrawGizmosSelected", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pc);
}
inline void GlobalNamespace::PlayerCroucher::UpdateAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"UpdateAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCroucher::ClearToggles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {"ClearToggles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCroucher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCroucher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCroucher* GlobalNamespace::PlayerCroucher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCroucher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCroucher::PlayerCroucher()   {
}
