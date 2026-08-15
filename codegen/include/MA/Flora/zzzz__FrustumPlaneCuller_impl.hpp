#pragma once
// IWYU pragma private; include "MA/Flora/FrustumPlaneCuller.hpp"
#include "MA/Flora/zzzz__FrustumSIMDPacket_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_def.hpp"
#include "MA/Flora/zzzz__AABB_def.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_def.hpp"
#include "MA/Flora/zzzz__FrustumSIMDPacket_def.hpp"
#include "MA/Flora/zzzz__ReceiverSphereCuller_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
// Ctor Parameters [CppParam { name: "PlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "PacketCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FrustumPlaneCuller_SplitInfo::FrustumPlaneCuller_SplitInfo(int32_t  PlaneCount, int32_t  PacketCount) noexcept  {
this->PlaneCount = PlaneCount;
this->PacketCount = PacketCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::FrustumPlaneCuller_SplitInfo::FrustumPlaneCuller_SplitInfo()   {
}
//  Writing Method size for method: ::MA::Flora::FrustumPlaneCuller.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::FrustumPlaneCuller::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::FrustumPlaneCuller::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814f91a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumPlaneCuller>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumPlaneCuller.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::FrustumPlaneCuller (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::by_ref<::MA::Flora::ReceiverSphereCuller>, ::Unity::Collections::Allocator)>(&::MA::Flora::FrustumPlaneCuller::Create)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x1814f8bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumPlaneCuller>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::MA::Flora::ReceiverSphereCuller>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FrustumPlaneCuller.ComputeSplitVisibilityMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>, ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>, ::MA::Flora::AABB)>(&::MA::Flora::FrustumPlaneCuller::ComputeSplitVisibilityMask)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1814f8a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumPlaneCuller>(),
                        {"ComputeSplitVisibilityMask", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle MA::Flora::FrustumPlaneCuller::Dispose(::Unity::Jobs::JobHandle  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumPlaneCuller>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, job);
}
inline ::MA::Flora::FrustumPlaneCuller MA::Flora::FrustumPlaneCuller::Create(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  receiverPlanes, ::by_ref<::MA::Flora::ReceiverSphereCuller>  receiverSphereCuller, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumPlaneCuller>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::by_ref<::MA::Flora::ReceiverSphereCuller>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::FrustumPlaneCuller>(nullptr, ___internal_method, cc, receiverPlanes, receiverSphereCuller, allocator);
}
inline uint32_t MA::Flora::FrustumPlaneCuller::ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>  planePackets, ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  splitInfos, ::MA::Flora::AABB  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FrustumPlaneCuller>(),
                        {"ComputeSplitVisibilityMask", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>>(), ::i2c::type_of<::MA::Flora::AABB>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, planePackets, splitInfos, aabb);
}
// Ctor Parameters [CppParam { name: "Planes", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "PlanePackets", ty: "::Unity::Collections::NativeList_1<::MA::Flora::FrustumSIMDPacket>", modifiers: "", def_value: Some("{}") }, CppParam { name: "SplitInfos", ty: "::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FrustumPlaneCuller::FrustumPlaneCuller(::Unity::Collections::NativeList_1<::UnityEngine::Plane>  Planes, ::Unity::Collections::NativeList_1<::MA::Flora::FrustumSIMDPacket>  PlanePackets, ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  SplitInfos) noexcept  {
this->Planes = Planes;
this->PlanePackets = PlanePackets;
this->SplitInfos = SplitInfos;
}
// Ctor Parameters []
constexpr ::MA::Flora::FrustumPlaneCuller::FrustumPlaneCuller()   {
}
