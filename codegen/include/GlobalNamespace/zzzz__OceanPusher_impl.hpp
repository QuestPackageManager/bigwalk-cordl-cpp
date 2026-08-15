#pragma once
// IWYU pragma private; include "GlobalNamespace/OceanPusher.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OceanPusher_def.hpp"
#include "GlobalNamespace/zzzz__ContactModificationHandler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__ModifiableContactPair_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OceanPusher.RunPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanPusher::*)(::UnityEngine::ModifiableContactPair, bool)>(&::GlobalNamespace::OceanPusher::RunPair)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18037f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"RunPair", {}, {::i2c::type_of<::UnityEngine::ModifiableContactPair>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanPusher.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanPusher::*)()>(&::GlobalNamespace::OceanPusher::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18037f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanPusher.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanPusher::*)()>(&::GlobalNamespace::OceanPusher::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18037f810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanPusher.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanPusher::*)()>(&::GlobalNamespace::OceanPusher::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18037f7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanPusher.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanPusher::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::OceanPusher::OnCollisionEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18037f740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanPusher.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanPusher::*)()>(&::GlobalNamespace::OceanPusher::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18037f880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OceanPusher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OceanPusher::*)()>(&::GlobalNamespace::OceanPusher::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::OceanPusher::__cordl_internal_get_myColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::OceanPusher::__cordl_internal_get_myColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myColliders;
}
constexpr void GlobalNamespace::OceanPusher::__cordl_internal_set_myColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myColliders = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::OceanPusher::__cordl_internal_get_magnetPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::OceanPusher::__cordl_internal_get_magnetPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___magnetPoint;
}
constexpr void GlobalNamespace::OceanPusher::__cordl_internal_set_magnetPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___magnetPoint = value;
}
constexpr float_t& GlobalNamespace::OceanPusher::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::OceanPusher::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::OceanPusher::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>*& GlobalNamespace::OceanPusher::__cordl_internal_get_validTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validTargets;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>* const& GlobalNamespace::OceanPusher::__cordl_internal_get_validTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validTargets;
}
constexpr void GlobalNamespace::OceanPusher::__cordl_internal_set_validTargets(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validTargets = value;
}
constexpr ::GlobalNamespace::ContactModificationHandler*& GlobalNamespace::OceanPusher::__cordl_internal_get_contactModificationHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactModificationHandler;
}
constexpr ::GlobalNamespace::ContactModificationHandler* const& GlobalNamespace::OceanPusher::__cordl_internal_get_contactModificationHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___contactModificationHandler;
}
constexpr void GlobalNamespace::OceanPusher::__cordl_internal_set_contactModificationHandler(::GlobalNamespace::ContactModificationHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___contactModificationHandler = value;
}
inline void GlobalNamespace::OceanPusher::RunPair(::UnityEngine::ModifiableContactPair  pair, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"RunPair", {}, {::i2c::type_of<::UnityEngine::ModifiableContactPair>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pair, flipped);
}
inline void GlobalNamespace::OceanPusher::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanPusher::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanPusher::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanPusher::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::OceanPusher::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OceanPusher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OceanPusher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OceanPusher* GlobalNamespace::OceanPusher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OceanPusher*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OceanPusher::OceanPusher()   {
}
