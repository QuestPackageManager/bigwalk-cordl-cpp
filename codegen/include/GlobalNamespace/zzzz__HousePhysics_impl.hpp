#pragma once
// IWYU pragma private; include "GlobalNamespace/HousePhysics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HousePhysics_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HousePhysics.FindLowestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*)>(&::GlobalNamespace::HousePhysics::FindLowestPoint)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1803ec0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"FindLowestPoint", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HousePhysics.FindLowestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Collider*)>(&::GlobalNamespace::HousePhysics::FindLowestPoint)> {
  constexpr static std::size_t size = 0x810;
  constexpr static std::size_t addrs = 0x1803eb8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"FindLowestPoint", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HousePhysics.ColliderCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::RaycastHit>, float_t, ::UnityEngine::LayerMask, ::UnityEngine::QueryTriggerInteraction)>(&::GlobalNamespace::HousePhysics::ColliderCast)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x1803eb1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"ColliderCast", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HousePhysics.SmoothDampQuaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::HousePhysics::SmoothDampQuaternion)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1803ec2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"SmoothDampQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HousePhysics.SmoothDampEuler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::HousePhysics::SmoothDampEuler)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803ec210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"SmoothDampEuler", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::HousePhysics::FindLowestPoint(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"FindLowestPoint", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, colliers);
}
inline ::UnityEngine::Vector3 GlobalNamespace::HousePhysics::FindLowestPoint(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"FindLowestPoint", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, collider);
}
inline bool GlobalNamespace::HousePhysics::ColliderCast(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  originOffset, ::UnityEngine::Vector3  direction, ::by_ref<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, ::UnityEngine::LayerMask  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"ColliderCast", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::LayerMask>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, collider, originOffset, direction, hitInfo, maxDistance, layerMask, queryTriggerInteraction);
}
inline ::UnityEngine::Quaternion GlobalNamespace::HousePhysics::SmoothDampQuaternion(::UnityEngine::Quaternion  current, ::UnityEngine::Quaternion  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"SmoothDampQuaternion", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, current, target, currentVelocity, smoothTime);
}
inline ::UnityEngine::Vector3 GlobalNamespace::HousePhysics::SmoothDampEuler(::UnityEngine::Vector3  current, ::UnityEngine::Vector3  target, ::by_ref<::UnityEngine::Vector3>  currentVelocity, float_t  smoothTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HousePhysics*>(),
                        {"SmoothDampEuler", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, current, target, currentVelocity, smoothTime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HousePhysics::HousePhysics()   {
}
