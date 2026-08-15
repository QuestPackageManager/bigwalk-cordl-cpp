#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerBeak.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerBeak_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerBeak.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBeak::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerBeak::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBeak.SetGrapserPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBeak::*)(::GlobalNamespace::Prop*, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::PlayerBeak::SetGrapserPosition)> {
  constexpr static std::size_t size = 0x1010;
  constexpr static std::size_t addrs = 0x18045eec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {"SetGrapserPosition", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBeak.ClearRetraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBeak::*)()>(&::GlobalNamespace::PlayerBeak::ClearRetraction)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18045edd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {"ClearRetraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBeak.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBeak::*)()>(&::GlobalNamespace::PlayerBeak::FixedUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerBeak._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerBeak::*)()>(&::GlobalNamespace::PlayerBeak::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleTime;
}
constexpr float_t const& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleTime;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_wobbleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wobbleTime = value;
}
constexpr float_t& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleMaxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleMaxAngle;
}
constexpr float_t const& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleMaxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleMaxAngle;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_wobbleMaxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wobbleMaxAngle = value;
}
constexpr bool& GlobalNamespace::PlayerBeak::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerBeak::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerBeak::__cordl_internal_get_overrideRaisedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideRaisedness;
}
constexpr bool const& GlobalNamespace::PlayerBeak::__cordl_internal_get_overrideRaisedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideRaisedness;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_overrideRaisedness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideRaisedness = value;
}
constexpr float_t& GlobalNamespace::PlayerBeak::__cordl_internal_get_overrideRaisednessValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideRaisednessValue;
}
constexpr float_t const& GlobalNamespace::PlayerBeak::__cordl_internal_get_overrideRaisednessValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideRaisednessValue;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_overrideRaisednessValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideRaisednessValue = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerBeak::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerBeak::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerBeak::__cordl_internal_get_currentRetraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRetraction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerBeak::__cordl_internal_get_currentRetraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRetraction;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_currentRetraction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRetraction = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleRotation;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_wobbleRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wobbleRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleVelocity;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_wobbleVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wobbleVelocity = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleLocalRotation;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_wobbleLocalRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wobbleLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleLocalVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleLocalVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerBeak::__cordl_internal_get_wobbleLocalVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wobbleLocalVelocity;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_wobbleLocalVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wobbleLocalVelocity = value;
}
constexpr bool& GlobalNamespace::PlayerBeak::__cordl_internal_get_propIsNew()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propIsNew;
}
constexpr bool const& GlobalNamespace::PlayerBeak::__cordl_internal_get_propIsNew() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propIsNew;
}
constexpr void GlobalNamespace::PlayerBeak::__cordl_internal_set_propIsNew(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propIsNew = value;
}
inline void GlobalNamespace::PlayerBeak::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerBeak::SetGrapserPosition(::GlobalNamespace::Prop*  prop, float_t  raisedness, ::by_ref<::UnityEngine::Vector3>  gripPositionLeft, ::by_ref<::UnityEngine::Vector3>  gripPositionRight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {"SetGrapserPosition", {}, {::i2c::type_of<::GlobalNamespace::Prop*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, raisedness, gripPositionLeft, gripPositionRight);
}
inline void GlobalNamespace::PlayerBeak::ClearRetraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {"ClearRetraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerBeak::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerBeak::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerBeak*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerBeak* GlobalNamespace::PlayerBeak::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerBeak*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerBeak::PlayerBeak()   {
}
