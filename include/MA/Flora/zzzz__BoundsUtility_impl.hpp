#pragma once
// IWYU pragma private; include "MA/Flora/BoundsUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__BoundsUtility_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::MA::Flora::BoundsUtility.IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds)>(&::MA::Flora::BoundsUtility::IsEmpty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f68e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IsEmpty", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BoundsUtility.GetBoundingRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Bounds)>(&::MA::Flora::BoundsUtility::GetBoundingRadius)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814f6490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"GetBoundingRadius", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BoundsUtility.TransformBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Bounds, ::Unity::Mathematics::float4x4)>(&::MA::Flora::BoundsUtility::TransformBy)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x1814aec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"TransformBy", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BoundsUtility.GetClosestPointTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Bounds, ::Unity::Mathematics::float3)>(&::MA::Flora::BoundsUtility::GetClosestPointTo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814f51f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"GetClosestPointTo", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BoundsUtility.IntersectsSphereSq
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::BoundsUtility::IntersectsSphereSq)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1814f53e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IntersectsSphereSq", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BoundsUtility.IntersectsSphereSq2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::BoundsUtility::IntersectsSphereSq2D)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1814f6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IntersectsSphereSq2D", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BoundsUtility.IntersectsSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::BoundsUtility::IntersectsSphere)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814f67f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BoundsUtility.IntersectsSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::BoundingSphere)>(&::MA::Flora::BoundsUtility::IntersectsSphere)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814f66d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::BoundingSphere>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::BoundsUtility::IsEmpty(::UnityEngine::Bounds  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IsEmpty", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b);
}
inline float_t MA::Flora::BoundsUtility::GetBoundingRadius(::UnityEngine::Bounds  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"GetBoundingRadius", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, b);
}
inline ::UnityEngine::Bounds MA::Flora::BoundsUtility::TransformBy(::UnityEngine::Bounds  b, ::Unity::Mathematics::float4x4  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"TransformBy", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, b, m);
}
inline ::Unity::Mathematics::float3 MA::Flora::BoundsUtility::GetClosestPointTo(::UnityEngine::Bounds  b, ::Unity::Mathematics::float3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"GetClosestPointTo", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, b, point);
}
inline bool MA::Flora::BoundsUtility::IntersectsSphereSq(::UnityEngine::Bounds  b, ::Unity::Mathematics::float3  center, float_t  radiusSq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IntersectsSphereSq", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b, center, radiusSq);
}
inline bool MA::Flora::BoundsUtility::IntersectsSphereSq2D(::UnityEngine::Bounds  b, ::Unity::Mathematics::float3  center, float_t  radiusSq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IntersectsSphereSq2D", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b, center, radiusSq);
}
inline bool MA::Flora::BoundsUtility::IntersectsSphere(::UnityEngine::Bounds  b, ::Unity::Mathematics::float3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b, center, radius);
}
inline bool MA::Flora::BoundsUtility::IntersectsSphere(::UnityEngine::Bounds  b, ::UnityEngine::BoundingSphere  sphere)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BoundsUtility*>(),
                        {"IntersectsSphere", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::BoundingSphere>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b, sphere);
}
// Ctor Parameters []
constexpr ::MA::Flora::BoundsUtility::BoundsUtility()   {
}
