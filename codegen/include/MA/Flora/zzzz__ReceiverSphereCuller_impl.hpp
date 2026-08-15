#pragma once
// IWYU pragma private; include "MA/Flora/ReceiverSphereCuller.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3x3_impl.hpp"
#include "Unity/Mathematics/zzzz__float4_impl.hpp"
#include "MA/Flora/zzzz__ReceiverSphereCuller_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__ReceiverSphereCuller_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
// Ctor Parameters [CppParam { name: "ReceiverSphereLightSpace", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: Some("{}") }, CppParam { name: "CascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ReceiverSphereCuller_SplitInfo::ReceiverSphereCuller_SplitInfo(::Unity::Mathematics::float4  ReceiverSphereLightSpace, float_t  CascadeBlendCullingFactor) noexcept  {
this->ReceiverSphereLightSpace = ReceiverSphereLightSpace;
this->CascadeBlendCullingFactor = CascadeBlendCullingFactor;
}
// Ctor Parameters []
constexpr ::MA::Flora::ReceiverSphereCuller_SplitInfo::ReceiverSphereCuller_SplitInfo()   {
}
//  Writing Method size for method: ::MA::Flora::ReceiverSphereCuller.CreateEmptyForTesting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ReceiverSphereCuller (*)(::Unity::Collections::Allocator)>(&::MA::Flora::ReceiverSphereCuller::CreateEmptyForTesting)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181501dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"CreateEmptyForTesting", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverSphereCuller.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::ReceiverSphereCuller::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::ReceiverSphereCuller::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181501880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverSphereCuller.UseReceiverPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::ReceiverSphereCuller::*)()>(&::MA::Flora::ReceiverSphereCuller::UseReceiverPlanes)> {
  constexpr static std::size_t size = 0x1e40;
  constexpr static std::size_t addrs = 0x180c36880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"UseReceiverPlanes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverSphereCuller.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ReceiverSphereCuller (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::Allocator)>(&::MA::Flora::ReceiverSphereCuller::Create)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x181501e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverSphereCuller.DistanceUntilCylinderFullyCrossesPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, float_t, ::UnityEngine::Plane)>(&::MA::Flora::ReceiverSphereCuller::DistanceUntilCylinderFullyCrossesPlane)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1815022d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"DistanceUntilCylinderFullyCrossesPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverSphereCuller.ComputeSplitVisibilityMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>, ::Unity::Mathematics::float3x3, ::MA::Flora::AABB)>(&::MA::Flora::ReceiverSphereCuller::ComputeSplitVisibilityMask)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181501a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"ComputeSplitVisibilityMask", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>>(), ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::ReceiverSphereCuller MA::Flora::ReceiverSphereCuller::CreateEmptyForTesting(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"CreateEmptyForTesting", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ReceiverSphereCuller>(nullptr, ___internal_method, allocator);
}
inline ::Unity::Jobs::JobHandle MA::Flora::ReceiverSphereCuller::Dispose(::Unity::Jobs::JobHandle  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, job);
}
inline bool MA::Flora::ReceiverSphereCuller::UseReceiverPlanes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"UseReceiverPlanes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::MA::Flora::ReceiverSphereCuller MA::Flora::ReceiverSphereCuller::Create(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ReceiverSphereCuller>(nullptr, ___internal_method, cc, allocator);
}
inline float_t MA::Flora::ReceiverSphereCuller::DistanceUntilCylinderFullyCrossesPlane(::Unity::Mathematics::float3  cylinderCenter, ::Unity::Mathematics::float3  cylinderDirection, float_t  cylinderRadius, ::UnityEngine::Plane  plane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"DistanceUntilCylinderFullyCrossesPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Plane>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, cylinderCenter, cylinderDirection, cylinderRadius, plane);
}
inline uint32_t MA::Flora::ReceiverSphereCuller::ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  lightFacingFrustumPlanes, ::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>  splitInfos, ::Unity::Mathematics::float3x3  worldToLightSpaceRotation, ::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverSphereCuller>(),
                        {"ComputeSplitVisibilityMask", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>>(), ::i2c::type_of<::Unity::Mathematics::float3x3>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, lightFacingFrustumPlanes, splitInfos, worldToLightSpaceRotation, aabb);
}
// Ctor Parameters [CppParam { name: "SplitInfos", ty: "::Unity::Collections::NativeList_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "WorldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ReceiverSphereCuller::ReceiverSphereCuller(::Unity::Collections::NativeList_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>  SplitInfos, ::Unity::Mathematics::float3x3  WorldToLightSpaceRotation) noexcept  {
this->SplitInfos = SplitInfos;
this->WorldToLightSpaceRotation = WorldToLightSpaceRotation;
}
// Ctor Parameters []
constexpr ::MA::Flora::ReceiverSphereCuller::ReceiverSphereCuller()   {
}
