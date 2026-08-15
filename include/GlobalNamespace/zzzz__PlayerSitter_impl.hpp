#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSitter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.get_isSittingCorrected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerSitter::*)()>(&::GlobalNamespace::PlayerSitter::get_isSittingCorrected)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803752a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"get_isSittingCorrected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerSitter::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180374490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.SetSittingLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)(bool)>(&::GlobalNamespace::PlayerSitter::SetSittingLocal)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180374630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"SetSittingLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.SetNoSitActionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)(float_t)>(&::GlobalNamespace::PlayerSitter::SetNoSitActionTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803745f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"SetNoSitActionTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)()>(&::GlobalNamespace::PlayerSitter::Update)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x180374dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)()>(&::GlobalNamespace::PlayerSitter::FixedUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180374430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.UpdateAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)(float_t, float_t)>(&::GlobalNamespace::PlayerSitter::UpdateAudio)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x180374740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"UpdateAudio", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.UpdateDangleness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)()>(&::GlobalNamespace::PlayerSitter::UpdateDangleness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180374430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"UpdateDangleness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter.SetDangleness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)(::StringW, ::UnityEngine::Transform*)>(&::GlobalNamespace::PlayerSitter::SetDangleness)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1803744b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"SetDangleness", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSitter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSitter::*)()>(&::GlobalNamespace::PlayerSitter::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180375280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerSitter::__cordl_internal_get_cameraOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerSitter::__cordl_internal_get_cameraOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraOffset;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_cameraOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerSitter::__cordl_internal_get_dangleCastOriginLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dangleCastOriginLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerSitter::__cordl_internal_get_dangleCastOriginLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dangleCastOriginLeft;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_dangleCastOriginLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dangleCastOriginLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlayerSitter::__cordl_internal_get_dangleCastOriginRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dangleCastOriginRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlayerSitter::__cordl_internal_get_dangleCastOriginRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dangleCastOriginRight;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_dangleCastOriginRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dangleCastOriginRight = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get_dangleZeroDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dangleZeroDistance;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get_dangleZeroDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dangleZeroDistance;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_dangleZeroDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dangleZeroDistance = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get_dangleFullDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dangleFullDistance;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get_dangleFullDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dangleFullDistance;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_dangleFullDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dangleFullDistance = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerSitter::__cordl_internal_get_sittingLocalBumOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingLocalBumOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerSitter::__cordl_internal_get_sittingLocalBumOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingLocalBumOffset;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_sittingLocalBumOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sittingLocalBumOffset = value;
}
constexpr bool& GlobalNamespace::PlayerSitter::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerSitter::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr bool& GlobalNamespace::PlayerSitter::__cordl_internal_get_drawDangleRays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawDangleRays;
}
constexpr bool const& GlobalNamespace::PlayerSitter::__cordl_internal_get_drawDangleRays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawDangleRays;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_drawDangleRays(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawDangleRays = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get__prevSittingness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevSittingness;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get__prevSittingness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prevSittingness;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set__prevSittingness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prevSittingness = value;
}
constexpr bool& GlobalNamespace::PlayerSitter::__cordl_internal_get_isSittingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSittingLocal;
}
constexpr bool const& GlobalNamespace::PlayerSitter::__cordl_internal_get_isSittingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSittingLocal;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_isSittingLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSittingLocal = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get_smoothSittingness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothSittingness;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get_smoothSittingness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothSittingness;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_smoothSittingness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothSittingness = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get_sittingnessVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingnessVel;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get_sittingnessVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sittingnessVel;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_sittingnessVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sittingnessVel = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerSitter::__cordl_internal_get_worldVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerSitter::__cordl_internal_get_worldVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldVelocity;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_worldVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerSitter::__cordl_internal_get_localVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerSitter::__cordl_internal_get_localVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVelocity;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_localVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerSitter::__cordl_internal_get_cachedKernalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedKernalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerSitter::__cordl_internal_get_cachedKernalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedKernalPosition;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_cachedKernalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedKernalPosition = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get_waitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get_waitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitTime;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_waitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitTime = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get_banExpiredTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___banExpiredTime;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get_banExpiredTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___banExpiredTime;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_banExpiredTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___banExpiredTime = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerSitter::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerSitter::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get_slidingUpdateTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidingUpdateTimer;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get_slidingUpdateTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidingUpdateTimer;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set_slidingUpdateTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slidingUpdateTimer = value;
}
constexpr float_t& GlobalNamespace::PlayerSitter::__cordl_internal_get__movingVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movingVelocity;
}
constexpr float_t const& GlobalNamespace::PlayerSitter::__cordl_internal_get__movingVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movingVelocity;
}
constexpr void GlobalNamespace::PlayerSitter::__cordl_internal_set__movingVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movingVelocity = value;
}
inline bool GlobalNamespace::PlayerSitter::get_isSittingCorrected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"get_isSittingCorrected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSitter::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerSitter::SetSittingLocal(bool  isSitting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"SetSittingLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSitting);
}
inline void GlobalNamespace::PlayerSitter::SetNoSitActionTime(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"SetNoSitActionTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::PlayerSitter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSitter::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSitter::UpdateAudio(float_t  newSittingness, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"UpdateAudio", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSittingness, deltaTime);
}
inline void GlobalNamespace::PlayerSitter::UpdateDangleness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"UpdateDangleness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSitter::SetDangleness(::StringW  param, ::UnityEngine::Transform*  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {"SetDangleness", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, param, origin);
}
inline void GlobalNamespace::PlayerSitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerSitter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSitter* GlobalNamespace::PlayerSitter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSitter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSitter::PlayerSitter()   {
}
