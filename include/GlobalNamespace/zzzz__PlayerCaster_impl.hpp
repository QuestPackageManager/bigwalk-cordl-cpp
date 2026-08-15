#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCaster_def.hpp"
#include "GlobalNamespace/zzzz__CastableTarget_def.hpp"
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCharacter_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCaster::*)(::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerCaster::Initialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180461350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster.LocalUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCaster::*)()>(&::GlobalNamespace::PlayerCaster::LocalUpdate)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x180461440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"LocalUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster.SearchThroughHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::GlobalNamespace::PlayerCaster::*)(::ArrayW<::UnityEngine::RaycastHit>, int32_t, ::by_ref<::UnityEngine::RaycastHit>, ::by_ref<bool>, bool)>(&::GlobalNamespace::PlayerCaster::SearchThroughHands)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x180461ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"SearchThroughHands", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster.IsDudCastableTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCaster::*)(::UnityEngine::Collider*, ::GlobalNamespace::PlayerCharacter*)>(&::GlobalNamespace::PlayerCaster::IsDudCastableTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804613a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"IsDudCastableTarget", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster.CastThroughHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::PlayerCaster::*)(::UnityEngine::Ray, float_t)>(&::GlobalNamespace::PlayerCaster::CastThroughHands)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1804611e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"CastThroughHands", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster.GetMaxDistanceForDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerCaster::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PlayerCaster::GetMaxDistanceForDirection)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804612d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"GetMaxDistanceForDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster.RayCastForObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::PlayerCaster::*)(::by_ref<bool>, ::by_ref<float_t>)>(&::GlobalNamespace::PlayerCaster::RayCastForObject)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x180461810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"RayCastForObject", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster.CanStillReachSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCaster::*)(::GlobalNamespace::PeckSwitch*)>(&::GlobalNamespace::PlayerCaster::CanStillReachSwitch)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x180460f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"CanStillReachSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCaster::*)()>(&::GlobalNamespace::PlayerCaster::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerCaster::__cordl_internal_get_raycastMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastMaxDistance;
}
constexpr float_t const& GlobalNamespace::PlayerCaster::__cordl_internal_get_raycastMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastMaxDistance;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_raycastMaxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastMaxDistance = value;
}
constexpr float_t& GlobalNamespace::PlayerCaster::__cordl_internal_get_raycastMaxDistanceUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastMaxDistanceUp;
}
constexpr float_t const& GlobalNamespace::PlayerCaster::__cordl_internal_get_raycastMaxDistanceUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastMaxDistanceUp;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_raycastMaxDistanceUp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastMaxDistanceUp = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::PlayerCaster::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::PlayerCaster::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr bool& GlobalNamespace::PlayerCaster::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlayerCaster::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerCaster::__cordl_internal_get_playerCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerCaster::__cordl_internal_get_playerCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCharacter;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCharacter = value;
}
constexpr ::UnityW<::GlobalNamespace::Prop>& GlobalNamespace::PlayerCaster::__cordl_internal_get_castProp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castProp;
}
constexpr ::UnityW<::GlobalNamespace::Prop> const& GlobalNamespace::PlayerCaster::__cordl_internal_get_castProp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castProp;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_castProp(::UnityW<::GlobalNamespace::Prop>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castProp = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& GlobalNamespace::PlayerCaster::__cordl_internal_get_castCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castCharacter;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& GlobalNamespace::PlayerCaster::__cordl_internal_get_castCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castCharacter;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_castCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castCharacter = value;
}
constexpr ::UnityW<::GlobalNamespace::CastableTarget>& GlobalNamespace::PlayerCaster::__cordl_internal_get_castableTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castableTarget;
}
constexpr ::UnityW<::GlobalNamespace::CastableTarget> const& GlobalNamespace::PlayerCaster::__cordl_internal_get_castableTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castableTarget;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_castableTarget(::UnityW<::GlobalNamespace::CastableTarget>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castableTarget = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::PlayerCaster::__cordl_internal_get_hitPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PlayerCaster::__cordl_internal_get_hitPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitPosition;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_hitPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitPosition = value;
}
constexpr float_t& GlobalNamespace::PlayerCaster::__cordl_internal_get_castDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castDistance;
}
constexpr float_t const& GlobalNamespace::PlayerCaster::__cordl_internal_get_castDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___castDistance;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_castDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___castDistance = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::PlayerCaster::__cordl_internal_get_hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::PlayerCaster::__cordl_internal_get_hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr void GlobalNamespace::PlayerCaster::__cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hits = value;
}
inline void GlobalNamespace::PlayerCaster::Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"Initialize", {}, {::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCharacter);
}
inline void GlobalNamespace::PlayerCaster::LocalUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"LocalUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> GlobalNamespace::PlayerCaster::SearchThroughHands(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  hitCount, ::by_ref<::UnityEngine::RaycastHit>  closestHit, ::by_ref<bool>  blocksPlayerCasting, bool  checkCastableConditions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"SearchThroughHands", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method, hits, hitCount, closestHit, blocksPlayerCasting, checkCastableConditions);
}
inline bool GlobalNamespace::PlayerCaster::IsDudCastableTarget(::UnityEngine::Collider*  collider, ::GlobalNamespace::PlayerCharacter*  playerCharacter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"IsDudCastableTarget", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::GlobalNamespace::PlayerCharacter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider, playerCharacter);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::PlayerCaster::CastThroughHands(::UnityEngine::Ray  ray, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"CastThroughHands", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, ray, maxDistance);
}
inline float_t GlobalNamespace::PlayerCaster::GetMaxDistanceForDirection(::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"GetMaxDistanceForDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, direction);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::PlayerCaster::RayCastForObject(::by_ref<bool>  blocksPlayerCasting, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"RayCastForObject", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, blocksPlayerCasting, distance);
}
inline bool GlobalNamespace::PlayerCaster::CanStillReachSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {"CanStillReachSwitch", {}, {::i2c::type_of<::GlobalNamespace::PeckSwitch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, peckSwitch);
}
inline void GlobalNamespace::PlayerCaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCaster* GlobalNamespace::PlayerCaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCaster*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCaster::PlayerCaster()   {
}
