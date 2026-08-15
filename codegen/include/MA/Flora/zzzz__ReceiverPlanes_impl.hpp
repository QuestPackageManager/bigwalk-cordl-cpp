#pragma once
// IWYU pragma private; include "MA/Flora/ReceiverPlanes.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "MA/Flora/zzzz__ReceiverPlanes_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::MA::Flora::ReceiverPlanes.IsSignBitSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::MA::Flora::ReceiverPlanes::IsSignBitSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815018f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"IsSignBitSet", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverPlanes.LightFacingFrustumPlaneSubArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::MA::Flora::ReceiverPlanes::*)()>(&::MA::Flora::ReceiverPlanes::LightFacingFrustumPlaneSubArray)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181501900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"LightFacingFrustumPlaneSubArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverPlanes.SilhouettePlaneSubArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Plane> (::MA::Flora::ReceiverPlanes::*)()>(&::MA::Flora::ReceiverPlanes::SilhouettePlaneSubArray)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181501990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"SilhouettePlaneSubArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverPlanes.CreateEmptyForTesting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ReceiverPlanes (*)(::Unity::Collections::Allocator)>(&::MA::Flora::ReceiverPlanes::CreateEmptyForTesting)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181500c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"CreateEmptyForTesting", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverPlanes.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::MA::Flora::ReceiverPlanes::*)(::Unity::Jobs::JobHandle)>(&::MA::Flora::ReceiverPlanes::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181501880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::ReceiverPlanes.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::ReceiverPlanes (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Collections::Allocator)>(&::MA::Flora::ReceiverPlanes::Create)> {
  constexpr static std::size_t size = 0xbc0;
  constexpr static std::size_t addrs = 0x181500cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::ReceiverPlanes::IsSignBitSet(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"IsSignBitSet", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> MA::Flora::ReceiverPlanes::LightFacingFrustumPlaneSubArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"LightFacingFrustumPlaneSubArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> MA::Flora::ReceiverPlanes::SilhouettePlaneSubArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"SilhouettePlaneSubArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(*this, ___internal_method);
}
inline ::MA::Flora::ReceiverPlanes MA::Flora::ReceiverPlanes::CreateEmptyForTesting(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"CreateEmptyForTesting", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ReceiverPlanes>(nullptr, ___internal_method, allocator);
}
inline ::Unity::Jobs::JobHandle MA::Flora::ReceiverPlanes::Dispose(::Unity::Jobs::JobHandle  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"Dispose", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, job);
}
inline ::MA::Flora::ReceiverPlanes MA::Flora::ReceiverPlanes::Create(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::ReceiverPlanes>(),
                        {"Create", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::ReceiverPlanes>(nullptr, ___internal_method, cc, allocator);
}
// Ctor Parameters [CppParam { name: "Planes", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: Some("{}") }, CppParam { name: "LightFacingPlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ReceiverPlanes::ReceiverPlanes(::Unity::Collections::NativeList_1<::UnityEngine::Plane>  Planes, int32_t  LightFacingPlaneCount) noexcept  {
this->Planes = Planes;
this->LightFacingPlaneCount = LightFacingPlaneCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::ReceiverPlanes::ReceiverPlanes()   {
}
