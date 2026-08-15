#pragma once
// IWYU pragma private; include "GlobalNamespace/MotionCamera.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MotionCamera_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerZone_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MotionCamera.CanSee
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MotionCamera::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::MotionCamera::CanSee)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1804043c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {"CanSee", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MotionCamera.CanSeeAnyPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PlayerCharacter> (::GlobalNamespace::MotionCamera::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*)>(&::GlobalNamespace::MotionCamera::CanSeeAnyPlayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180404320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {"CanSeeAnyPlayer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MotionCamera.SetAlarmed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MotionCamera::*)(bool)>(&::GlobalNamespace::MotionCamera::SetAlarmed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804047d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {"SetAlarmed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MotionCamera.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MotionCamera::*)()>(&::GlobalNamespace::MotionCamera::Update)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180404820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MotionCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MotionCamera::*)()>(&::GlobalNamespace::MotionCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerZone>& GlobalNamespace::MotionCamera::__cordl_internal_get_playerZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& GlobalNamespace::MotionCamera::__cordl_internal_get_playerZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerZone;
}
constexpr void GlobalNamespace::MotionCamera::__cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerZone = value;
}
constexpr float_t& GlobalNamespace::MotionCamera::__cordl_internal_get_farDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___farDistance;
}
constexpr float_t const& GlobalNamespace::MotionCamera::__cordl_internal_get_farDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___farDistance;
}
constexpr void GlobalNamespace::MotionCamera::__cordl_internal_set_farDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___farDistance = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::MotionCamera::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::MotionCamera::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::MotionCamera::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr float_t& GlobalNamespace::MotionCamera::__cordl_internal_get_coneAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coneAngle;
}
constexpr float_t const& GlobalNamespace::MotionCamera::__cordl_internal_get_coneAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coneAngle;
}
constexpr void GlobalNamespace::MotionCamera::__cordl_internal_set_coneAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coneAngle = value;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::MotionCamera::__cordl_internal_get_outputSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::MotionCamera::__cordl_internal_get_outputSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputSystem;
}
constexpr void GlobalNamespace::MotionCamera::__cordl_internal_set_outputSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputSystem = value;
}
constexpr bool& GlobalNamespace::MotionCamera::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::MotionCamera::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::MotionCamera::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::MotionCamera::__cordl_internal_get_isAlarmed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAlarmed;
}
constexpr bool const& GlobalNamespace::MotionCamera::__cordl_internal_get_isAlarmed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAlarmed;
}
constexpr void GlobalNamespace::MotionCamera::__cordl_internal_set_isAlarmed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAlarmed = value;
}
inline bool GlobalNamespace::MotionCamera::CanSee(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {"CanSee", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerCharacter);
}
inline ::UnityW<::GlobalNamespace::PlayerCharacter> GlobalNamespace::MotionCamera::CanSeeAnyPlayer(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*  playerCharacters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {"CanSeeAnyPlayer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayerCharacter>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PlayerCharacter>>(this, ___internal_method, playerCharacters);
}
inline void GlobalNamespace::MotionCamera::SetAlarmed(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {"SetAlarmed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::MotionCamera::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MotionCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MotionCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MotionCamera* GlobalNamespace::MotionCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MotionCamera*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MotionCamera::MotionCamera()   {
}
