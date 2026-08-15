#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMover.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerMover_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerNetworking_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.get_playerNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerNetworking> (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::get_playerNetworking)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180359700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_playerNetworking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.get_cachedKernalPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::get_cachedKernalPos)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180359600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_cachedKernalPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.set_cachedKernalPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerMover::set_cachedKernalPos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180359720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"set_cachedKernalPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.get_localKernalVelocityMinusPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::get_localKernalVelocityMinusPlatform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803596e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_localKernalVelocityMinusPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.set_localKernalVelocityMinusPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerMover::set_localKernalVelocityMinusPlatform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180359730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"set_localKernalVelocityMinusPlatform", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.get_LocalKernalSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::get_LocalKernalSpeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803595d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_LocalKernalSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.get_correctedControlsVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::get_correctedControlsVelocity)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x180359620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_correctedControlsVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.get_VelYUsedForAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::get_VelYUsedForAnimation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_VelYUsedForAnimation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.IsStandingStillForSliding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::IsStandingStillForSliding)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803573c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"IsStandingStillForSliding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerMover::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180357340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::FixedUpdate)> {
  constexpr static std::size_t size = 0xec0;
  constexpr static std::size_t addrs = 0x1803561d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.GetForwardSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::GetForwardSpeed)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x180357090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"GetForwardSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.LocalFixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)(::by_ref<float_t>)>(&::GlobalNamespace::PlayerMover::LocalFixedUpdate)> {
  constexpr static std::size_t size = 0xdf0;
  constexpr static std::size_t addrs = 0x180357420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"LocalFixedUpdate", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.UpdatePerFrameRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::UpdatePerFrameRotation)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x180358360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"UpdatePerFrameRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::Update)> {
  constexpr static std::size_t size = 0xba0;
  constexpr static std::size_t addrs = 0x1803589f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.ResetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::ResetPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180358210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"ResetPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover.StickMovementIsClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerMover::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerMover::StickMovementIsClose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803582c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"StickMovementIsClose", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerMover._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerMover::*)()>(&::GlobalNamespace::PlayerMover::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803595c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerMover::__cordl_internal_get_pc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerMover::__cordl_internal_get_pc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pc;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_pc(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pc = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_applyVelocityForRemotePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyVelocityForRemotePlayers;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_applyVelocityForRemotePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyVelocityForRemotePlayers;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_applyVelocityForRemotePlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyVelocityForRemotePlayers = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_applySittingSpin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applySittingSpin;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_applySittingSpin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applySittingSpin;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_applySittingSpin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applySittingSpin = value;
}
constexpr float_t& GlobalNamespace::PlayerMover::__cordl_internal_get_sittingSpinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingSpinSpeed;
}
constexpr float_t const& GlobalNamespace::PlayerMover::__cordl_internal_get_sittingSpinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingSpinSpeed;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_sittingSpinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sittingSpinSpeed = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_noUpwardsPlatformMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noUpwardsPlatformMovement;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_noUpwardsPlatformMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noUpwardsPlatformMovement;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_noUpwardsPlatformMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noUpwardsPlatformMovement = value;
}
constexpr float_t& GlobalNamespace::PlayerMover::__cordl_internal_get_trueSpeedDeadZoneThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trueSpeedDeadZoneThreshold;
}
constexpr float_t const& GlobalNamespace::PlayerMover::__cordl_internal_get_trueSpeedDeadZoneThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trueSpeedDeadZoneThreshold;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_trueSpeedDeadZoneThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trueSpeedDeadZoneThreshold = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_useGripTest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGripTest;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_useGripTest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGripTest;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_useGripTest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGripTest = value;
}
constexpr float_t& GlobalNamespace::PlayerMover::__cordl_internal_get_minimumPushGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumPushGrip;
}
constexpr float_t const& GlobalNamespace::PlayerMover::__cordl_internal_get_minimumPushGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumPushGrip;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_minimumPushGrip(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumPushGrip = value;
}
constexpr float_t& GlobalNamespace::PlayerMover::__cordl_internal_get_noGripVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noGripVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerMover::__cordl_internal_get_noGripVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noGripVelocity;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_noGripVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noGripVelocity = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_logSittingSpin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSittingSpin;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_logSittingSpin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logSittingSpin;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_logSittingSpin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logSittingSpin = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_logStandingSpin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logStandingSpin;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_logStandingSpin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logStandingSpin;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_logStandingSpin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logStandingSpin = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_logGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logGrip;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_logGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logGrip;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_logGrip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logGrip = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_ignorePlatform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignorePlatform;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_ignorePlatform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignorePlatform;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_ignorePlatform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignorePlatform = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_ignoreAirbourneVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreAirbourneVelocity;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_ignoreAirbourneVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreAirbourneVelocity;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_ignoreAirbourneVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreAirbourneVelocity = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_bypassFixedUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassFixedUpdate;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_bypassFixedUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassFixedUpdate;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_bypassFixedUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassFixedUpdate = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_bypassUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassUpdate;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_bypassUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassUpdate;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_bypassUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassUpdate = value;
}
constexpr float_t& GlobalNamespace::PlayerMover::__cordl_internal_get_timeAtLastSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastSync;
}
constexpr float_t const& GlobalNamespace::PlayerMover::__cordl_internal_get_timeAtLastSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLastSync;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_timeAtLastSync(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtLastSync = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get__cachedKernalPos_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedKernalPos_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get__cachedKernalPos_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedKernalPos_k__BackingField;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set__cachedKernalPos_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedKernalPos_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get_poseVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get_poseVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseVelocity;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_poseVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseVelocity = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::PlayerMover::__cordl_internal_get_spinBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinBuffer;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::PlayerMover::__cordl_internal_get_spinBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinBuffer;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_spinBuffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinBuffer = value;
}
constexpr int32_t& GlobalNamespace::PlayerMover::__cordl_internal_get_spinBufferIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinBufferIndex;
}
constexpr int32_t const& GlobalNamespace::PlayerMover::__cordl_internal_get_spinBufferIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spinBufferIndex;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_spinBufferIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spinBufferIndex = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get_localKernalVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localKernalVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get_localKernalVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localKernalVelocity;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_localKernalVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localKernalVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get__localKernalVelocityMinusPlatform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localKernalVelocityMinusPlatform_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get__localKernalVelocityMinusPlatform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localKernalVelocityMinusPlatform_k__BackingField;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set__localKernalVelocityMinusPlatform_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localKernalVelocityMinusPlatform_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get_localControlsVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localControlsVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get_localControlsVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localControlsVelocity;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_localControlsVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localControlsVelocity = value;
}
constexpr float_t& GlobalNamespace::PlayerMover::__cordl_internal_get_velYUsedForAnimation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velYUsedForAnimation;
}
constexpr float_t const& GlobalNamespace::PlayerMover::__cordl_internal_get_velYUsedForAnimation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velYUsedForAnimation;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_velYUsedForAnimation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velYUsedForAnimation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get_airbourneVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___airbourneVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get_airbourneVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___airbourneVelocity;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_airbourneVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___airbourneVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get_potentialAirbourneVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialAirbourneVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get_potentialAirbourneVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialAirbourneVelocity;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_potentialAirbourneVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialAirbourneVelocity = value;
}
constexpr bool& GlobalNamespace::PlayerMover::__cordl_internal_get_wasGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasGrounded;
}
constexpr bool const& GlobalNamespace::PlayerMover::__cordl_internal_get_wasGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasGrounded;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_wasGrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasGrounded = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get_remotePlayerWorldVelocityDamped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayerWorldVelocityDamped;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get_remotePlayerWorldVelocityDamped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayerWorldVelocityDamped;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_remotePlayerWorldVelocityDamped(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remotePlayerWorldVelocityDamped = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerMover::__cordl_internal_get_remotePlayerWorldVelocityVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayerWorldVelocityVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerMover::__cordl_internal_get_remotePlayerWorldVelocityVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePlayerWorldVelocityVelocity;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set_remotePlayerWorldVelocityVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remotePlayerWorldVelocityVelocity = value;
}
constexpr float_t& GlobalNamespace::PlayerMover::__cordl_internal_get__runningPerFrameRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningPerFrameRotation;
}
constexpr float_t const& GlobalNamespace::PlayerMover::__cordl_internal_get__runningPerFrameRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____runningPerFrameRotation;
}
constexpr void GlobalNamespace::PlayerMover::__cordl_internal_set__runningPerFrameRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____runningPerFrameRotation = value;
}
inline void GlobalNamespace::PlayerMover::setStaticF_defaultSmoothTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "defaultSmoothTime", ::GlobalNamespace::PlayerMover*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::PlayerMover::getStaticF_defaultSmoothTime()  {
return ::cordl_internals::getStaticField<float_t, "defaultSmoothTime", ::GlobalNamespace::PlayerMover*>();
}
inline ::UnityW<::GlobalNamespace::PlayerNetworking> GlobalNamespace::PlayerMover::get_playerNetworking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_playerNetworking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerNetworking>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerMover::get_cachedKernalPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_cachedKernalPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMover::set_cachedKernalPos(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"set_cachedKernalPos", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerMover::get_localKernalVelocityMinusPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_localKernalVelocityMinusPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMover::set_localKernalVelocityMinusPlatform(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"set_localKernalVelocityMinusPlatform", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerMover::get_LocalKernalSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_LocalKernalSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayerMover::get_correctedControlsVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_correctedControlsVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerMover::get_VelYUsedForAnimation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"get_VelYUsedForAnimation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMover::IsStandingStillForSliding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"IsStandingStillForSliding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMover::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerMover::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayerMover::GetForwardSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"GetForwardSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMover::LocalFixedUpdate(::by_ref<float_t>  velY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"LocalFixedUpdate", {}, {::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velY);
}
inline void GlobalNamespace::PlayerMover::UpdatePerFrameRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"UpdatePerFrameRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMover::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerMover::ResetPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"ResetPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerMover::StickMovementIsClose(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {"StickMovementIsClose", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline void GlobalNamespace::PlayerMover::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerMover*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerMover* GlobalNamespace::PlayerMover::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerMover*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerMover::PlayerMover()   {
}
