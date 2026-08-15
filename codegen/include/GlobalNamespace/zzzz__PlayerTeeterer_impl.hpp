#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTeeterer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerTeeterer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerTeeterer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeeterer::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerTeeterer::Initialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180376900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeeterer*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeeterer.UpdateRotationDamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeeterer::*)()>(&::GlobalNamespace::PlayerTeeterer::UpdateRotationDamp)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x180376980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeeterer*>(),
                        {"UpdateRotationDamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeeterer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeeterer::*)()>(&::GlobalNamespace::PlayerTeeterer::Update)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180376b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeeterer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerTeeterer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerTeeterer::*)()>(&::GlobalNamespace::PlayerTeeterer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeeterer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_rotationSmoothTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSmoothTime;
}
constexpr float_t const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_rotationSmoothTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSmoothTime;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_rotationSmoothTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSmoothTime = value;
}
constexpr bool& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_ignoreTeeter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreTeeter;
}
constexpr bool const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_ignoreTeeter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreTeeter;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_ignoreTeeter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreTeeter = value;
}
constexpr bool& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_ignoreRotationDamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreRotationDamp;
}
constexpr bool const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_ignoreRotationDamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreRotationDamp;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_ignoreRotationDamp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreRotationDamp = value;
}
constexpr bool& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseDefaultLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseDefaultLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseDefaultLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseDefaultLocalPosition;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_grabPoseDefaultLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPoseDefaultLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseVelocity;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_grabPoseVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPoseVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseCachedPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseCachedPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseCachedPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseCachedPos;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_grabPoseCachedPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPoseCachedPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_poseSmoothLocalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseSmoothLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_poseSmoothLocalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseSmoothLocalPos;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_poseSmoothLocalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseSmoothLocalPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_poseLocalVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseLocalVel;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_poseLocalVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseLocalVel;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_poseLocalVel(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseLocalVel = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseSmoothedRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseSmoothedRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseSmoothedRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseSmoothedRotation;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_grabPoseSmoothedRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPoseSmoothedRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseRotationVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseRotationVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerTeeterer::__cordl_internal_get_grabPoseRotationVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabPoseRotationVelocity;
}
constexpr void GlobalNamespace::PlayerTeeterer::__cordl_internal_set_grabPoseRotationVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabPoseRotationVelocity = value;
}
inline void GlobalNamespace::PlayerTeeterer::setStaticF_defaultSmoothTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "defaultSmoothTime", ::GlobalNamespace::PlayerTeeterer*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::PlayerTeeterer::getStaticF_defaultSmoothTime()  {
return ::cordl_internals::getStaticField<float_t, "defaultSmoothTime", ::GlobalNamespace::PlayerTeeterer*>();
}
inline void GlobalNamespace::PlayerTeeterer::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeeterer*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerTeeterer::UpdateRotationDamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeeterer*>(),
                        {"UpdateRotationDamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeeterer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeeterer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerTeeterer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerTeeterer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerTeeterer* GlobalNamespace::PlayerTeeterer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerTeeterer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTeeterer::PlayerTeeterer()   {
}
