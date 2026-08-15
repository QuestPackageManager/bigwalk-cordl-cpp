#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerFeet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerFeet_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerFeet.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFeet::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerFeet::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFeet.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFeet::*)()>(&::GlobalNamespace::PlayerFeet::LateUpdate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x180468990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFeet.UpdateForFoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFeet::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PlayerFeet::UpdateForFoot)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x180468b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"UpdateForFoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFeet.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFeet::*)()>(&::GlobalNamespace::PlayerFeet::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180468b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFeet.DrawGizmosForFoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFeet::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::PlayerFeet::DrawGizmosForFoot)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x180468820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"DrawGizmosForFoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerFeet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerFeet::*)()>(&::GlobalNamespace::PlayerFeet::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerFeet::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerFeet::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr float_t& GlobalNamespace::PlayerFeet::__cordl_internal_get_rayCastOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastOffset;
}
constexpr float_t const& GlobalNamespace::PlayerFeet::__cordl_internal_get_rayCastOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastOffset;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_rayCastOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastOffset = value;
}
constexpr float_t& GlobalNamespace::PlayerFeet::__cordl_internal_get_rayCastLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastLength;
}
constexpr float_t const& GlobalNamespace::PlayerFeet::__cordl_internal_get_rayCastLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastLength;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_rayCastLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastLength = value;
}
constexpr float_t& GlobalNamespace::PlayerFeet::__cordl_internal_get_maxRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotation;
}
constexpr float_t const& GlobalNamespace::PlayerFeet::__cordl_internal_get_maxRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotation;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_maxRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRotation = value;
}
constexpr float_t& GlobalNamespace::PlayerFeet::__cordl_internal_get_maxTranslation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTranslation;
}
constexpr float_t const& GlobalNamespace::PlayerFeet::__cordl_internal_get_maxTranslation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTranslation;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_maxTranslation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTranslation = value;
}
constexpr bool& GlobalNamespace::PlayerFeet::__cordl_internal_get_rotateFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateFoot;
}
constexpr bool const& GlobalNamespace::PlayerFeet::__cordl_internal_get_rotateFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateFoot;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_rotateFoot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateFoot = value;
}
constexpr bool& GlobalNamespace::PlayerFeet::__cordl_internal_get_translateFoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translateFoot;
}
constexpr bool const& GlobalNamespace::PlayerFeet::__cordl_internal_get_translateFoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___translateFoot;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_translateFoot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___translateFoot = value;
}
constexpr bool& GlobalNamespace::PlayerFeet::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerFeet::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::PlayerFeet::__cordl_internal_get_hit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::PlayerFeet::__cordl_internal_get_hit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hit;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_hit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hit = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerFeet::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerFeet::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerFeet::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
inline void GlobalNamespace::PlayerFeet::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerFeet::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFeet::UpdateForFoot(::UnityEngine::Transform*  foot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"UpdateForFoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foot);
}
inline void GlobalNamespace::PlayerFeet::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerFeet::DrawGizmosForFoot(::UnityEngine::Transform*  targetTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {"DrawGizmosForFoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTransform);
}
inline void GlobalNamespace::PlayerFeet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerFeet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerFeet* GlobalNamespace::PlayerFeet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerFeet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerFeet::PlayerFeet()   {
}
