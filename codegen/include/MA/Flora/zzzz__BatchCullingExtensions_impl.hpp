#pragma once
// IWYU pragma private; include "MA/Flora/BatchCullingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "MA/Flora/zzzz__BatchCullingExtensions_def.hpp"
#include "MA/Flora/zzzz__DisposableBatchCullingContext_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.IsCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>)>(&::MA::Flora::BatchCullingExtensions::IsCreated)> {
  constexpr static std::size_t size = 0x27f0;
  constexpr static std::size_t addrs = 0x18110d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"IsCreated", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>)>(&::MA::Flora::BatchCullingExtensions::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181457ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>, ::Unity::Jobs::JobHandle)>(&::MA::Flora::BatchCullingExtensions::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181457d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchCullingContext (*)(::UnityEngine::Rendering::BatchCullingContext, ::Unity::Collections::Allocator)>(&::MA::Flora::BatchCullingExtensions::Clone)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1814569d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"Clone", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.CreateCameraCullingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DisposableBatchCullingContext (*)(::UnityEngine::Camera*, ::Unity::Collections::Allocator, ::UnityEngine::Rendering::BatchCullingViewType)>(&::MA::Flora::BatchCullingExtensions::CreateCameraCullingContext)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181456fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreateCameraCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.CreateCameraCullingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DisposableBatchCullingContext (*)(::UnityEngine::Camera*, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>, ::Unity::Collections::Allocator, ::UnityEngine::Rendering::BatchCullingViewType)>(&::MA::Flora::BatchCullingExtensions::CreateCameraCullingContext)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181456b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreateCameraCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.CreateCameraCullingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DisposableBatchCullingContext (*)(::UnityEngine::Camera*, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>, ::UnityEngine::Rendering::BatchCullingViewType)>(&::MA::Flora::BatchCullingExtensions::CreateCameraCullingContext)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181456c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreateCameraCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.CreatePickingCullingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DisposableBatchCullingContext (*)(::UnityEngine::Camera*, ::UnityEngine::Matrix4x4, ::Unity::Collections::Allocator)>(&::MA::Flora::BatchCullingExtensions::CreatePickingCullingContext)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x181457180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreatePickingCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::BatchCullingExtensions.CreatePickingCullingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DisposableBatchCullingContext (*)(::UnityEngine::Camera*, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::Allocator)>(&::MA::Flora::BatchCullingExtensions::CreatePickingCullingContext)> {
  constexpr static std::size_t size = 0x530;
  constexpr static std::size_t addrs = 0x1814577b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreatePickingCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::BatchCullingExtensions::setStaticF_TempPlanes(::ArrayW<::UnityEngine::Plane>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Plane>, "TempPlanes", ::MA::Flora::BatchCullingExtensions*>(std::forward<::ArrayW<::UnityEngine::Plane>>(value));
}
inline ::ArrayW<::UnityEngine::Plane> MA::Flora::BatchCullingExtensions::getStaticF_TempPlanes()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Plane>, "TempPlanes", ::MA::Flora::BatchCullingExtensions*>();
}
inline bool MA::Flora::BatchCullingExtensions::IsCreated(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"IsCreated", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, context);
}
inline void MA::Flora::BatchCullingExtensions::Dispose(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context);
}
inline ::Unity::Jobs::JobHandle MA::Flora::BatchCullingExtensions::Dispose(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  context, ::Unity::Jobs::JobHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"Dispose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, context, dependency);
}
inline ::UnityEngine::Rendering::BatchCullingContext MA::Flora::BatchCullingExtensions::Clone(::UnityEngine::Rendering::BatchCullingContext  cc, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"Clone", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchCullingContext>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchCullingContext>(nullptr, ___internal_method, cc, allocator);
}
inline ::MA::Flora::DisposableBatchCullingContext MA::Flora::BatchCullingExtensions::CreateCameraCullingContext(::UnityEngine::Camera*  camera, ::Unity::Collections::Allocator  allocator, ::UnityEngine::Rendering::BatchCullingViewType  viewType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreateCameraCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DisposableBatchCullingContext>(nullptr, ___internal_method, camera, allocator, viewType);
}
inline ::MA::Flora::DisposableBatchCullingContext MA::Flora::BatchCullingExtensions::CreateCameraCullingContext(::UnityEngine::Camera*  camera, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, ::Unity::Collections::Allocator  allocator, ::UnityEngine::Rendering::BatchCullingViewType  viewType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreateCameraCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DisposableBatchCullingContext>(nullptr, ___internal_method, camera, cullingParameters, allocator, viewType);
}
inline ::MA::Flora::DisposableBatchCullingContext MA::Flora::BatchCullingExtensions::CreateCameraCullingContext(::UnityEngine::Camera*  camera, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  cullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>  cullingSplits, ::UnityEngine::Rendering::BatchCullingViewType  viewType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreateCameraCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DisposableBatchCullingContext>(nullptr, ___internal_method, camera, cullingParameters, cullingPlanes, cullingSplits, viewType);
}
inline ::MA::Flora::DisposableBatchCullingContext MA::Flora::BatchCullingExtensions::CreatePickingCullingContext(::UnityEngine::Camera*  camera, ::UnityEngine::Matrix4x4  projectionMatrix, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreatePickingCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DisposableBatchCullingContext>(nullptr, ___internal_method, camera, projectionMatrix, allocator);
}
inline ::MA::Flora::DisposableBatchCullingContext MA::Flora::BatchCullingExtensions::CreatePickingCullingContext(::UnityEngine::Camera*  camera, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::BatchCullingExtensions*>(),
                        {"CreatePickingCullingContext", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DisposableBatchCullingContext>(nullptr, ___internal_method, camera, planes, allocator);
}
// Ctor Parameters []
constexpr ::MA::Flora::BatchCullingExtensions::BatchCullingExtensions()   {
}
