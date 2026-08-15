#pragma once
// IWYU pragma private; include "MA/Flora/FrustumUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__FrustumUtility_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__AxisAlignedBox_def.hpp"
#include "MA/Flora/zzzz__FrustumIntersectResult_def.hpp"
#include "MA/Flora/zzzz__FrustumSIMDPacket_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::MA::Flora::FrustumUtility.TryIntersectPlanes3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Plane, ::UnityEngine::Plane, ::UnityEngine::Plane, ::by_ref<::Unity::Mathematics::float3>)>(&::MA::Flora::FrustumUtility::TryIntersectPlanes3)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1814f54c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"TryIntersectPlanes3", {}, {::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumUtility.ComputeCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<::UnityEngine::Plane>, ::System::Span_1<::Unity::Mathematics::float3>)>(&::MA::Flora::FrustumUtility::ComputeCorners)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814f9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"ComputeCorners", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::System::Span_1<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumUtility.ComputeCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float4x4>, float_t, ::System::Span_1<::Unity::Mathematics::float3>)>(&::MA::Flora::FrustumUtility::ComputeCorners)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1814f9a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"ComputeCorners", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Span_1<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumUtility.ComputeBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (*)(::System::ReadOnlySpan_1<::UnityEngine::Plane>)>(&::MA::Flora::FrustumUtility::ComputeBounds)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814f9610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumUtility.ComputeSIMDPacketCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::MA::Flora::FrustumUtility::ComputeSIMDPacketCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f9b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"ComputeSIMDPacketCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumUtility.InitializeSIMDPackets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<::UnityEngine::Plane>, ::System::Span_1<::MA::Flora::FrustumSIMDPacket>)>(&::MA::Flora::FrustumUtility::InitializeSIMDPackets)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x1814f9ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"InitializeSIMDPackets", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::System::Span_1<::MA::Flora::FrustumSIMDPacket>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumUtility.IntersectSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FrustumIntersectResult (*)(::System::ReadOnlySpan_1<::UnityEngine::Plane>, ::Unity::Mathematics::float3, float_t)>(&::MA::Flora::FrustumUtility::IntersectSphere)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1814fa1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"IntersectSphere", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumUtility.IntersectBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FrustumIntersectResult (*)(::System::ReadOnlySpan_1<::UnityEngine::Plane>, ::MA::Flora::AABB)>(&::MA::Flora::FrustumUtility::IntersectBounds)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1814fa050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"IntersectBounds", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumUtility.IntersectBoundsSIMD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FrustumIntersectResult (*)(::System::ReadOnlySpan_1<::MA::Flora::FrustumSIMDPacket>, ::MA::Flora::AABB)>(&::MA::Flora::FrustumUtility::IntersectBoundsSIMD)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1814f9de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"IntersectBoundsSIMD", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::MA::Flora::FrustumSIMDPacket>>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::FrustumUtility::TryIntersectPlanes3(::UnityEngine::Plane  p0, ::UnityEngine::Plane  p1, ::UnityEngine::Plane  p2, ::by_ref<::Unity::Mathematics::float3>  intersectionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"TryIntersectPlanes3", {}, {::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::UnityEngine::Plane>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p0, p1, p2, intersectionPoint);
}
inline void MA::Flora::FrustumUtility::ComputeCorners(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::System::Span_1<::Unity::Mathematics::float3>  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"ComputeCorners", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::System::Span_1<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, vertices);
}
inline void MA::Flora::FrustumUtility::ComputeCorners(::by_ref<::Unity::Mathematics::float4x4>  invViewProjectionMatrix, float_t  z, ::System::Span_1<::Unity::Mathematics::float3>  vertices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"ComputeCorners", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float4x4>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Span_1<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, invViewProjectionMatrix, z, vertices);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::FrustumUtility::ComputeBounds(::System::ReadOnlySpan_1<::UnityEngine::Plane>  frustumPlanes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"ComputeBounds", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(nullptr, ___internal_method, frustumPlanes);
}
inline int32_t MA::Flora::FrustumUtility::ComputeSIMDPacketCount(int32_t  planeCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"ComputeSIMDPacketCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, planeCount);
}
inline void MA::Flora::FrustumUtility::InitializeSIMDPackets(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::System::Span_1<::MA::Flora::FrustumSIMDPacket>  packets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"InitializeSIMDPackets", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::System::Span_1<::MA::Flora::FrustumSIMDPacket>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, planes, packets);
}
inline ::MA::Flora::FrustumIntersectResult MA::Flora::FrustumUtility::IntersectSphere(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::Unity::Mathematics::float3  center, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"IntersectSphere", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FrustumIntersectResult>(nullptr, ___internal_method, planes, center, radius);
}
inline ::MA::Flora::FrustumIntersectResult MA::Flora::FrustumUtility::IntersectBounds(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"IntersectBounds", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::UnityEngine::Plane>>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FrustumIntersectResult>(nullptr, ___internal_method, planes, aabb);
}
inline ::MA::Flora::FrustumIntersectResult MA::Flora::FrustumUtility::IntersectBoundsSIMD(::System::ReadOnlySpan_1<::MA::Flora::FrustumSIMDPacket>  packets, ::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumUtility*>(),
                        {"IntersectBoundsSIMD", {}, {::i2c::type_of<::System::ReadOnlySpan_1<::MA::Flora::FrustumSIMDPacket>>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FrustumIntersectResult>(nullptr, ___internal_method, packets, aabb);
}
// Ctor Parameters []
constexpr ::MA::Flora::FrustumUtility::FrustumUtility()   {
}
