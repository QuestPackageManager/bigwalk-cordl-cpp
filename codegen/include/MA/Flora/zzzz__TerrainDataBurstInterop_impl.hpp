#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDataBurstInterop.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "MA/Flora/zzzz__TerrainDataBurstInterop_def.hpp"
#include "MA/Flora/zzzz__TerrainDataBurstInterop_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__DetailInstanceTransform_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, ::System::IntPtr, ::by_ref<::Unity::Collections::Allocator>)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, ::System::IntPtr, ::by_ref<::Unity::Collections::Allocator>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181509bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, ::by_ref<::Unity::Collections::Allocator>, ::System::IAsyncResult*)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181509c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __returnValue, terrainDataPtr, allocator);
}
inline ::System::IAsyncResult* MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, __returnValue, terrainDataPtr, allocator, callback, object);
}
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::EndInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::by_ref<::Unity::Collections::Allocator>  allocator, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __returnValue, allocator, result);
}
inline ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate* MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate::__InteropDelegates_TerrainDataBurstInterop__GetTreeInstances_0_Delegate()   {
}
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181509da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::*)(::System::IntPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, bool)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::*)(::System::IntPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, bool, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181509c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, ::System::IAsyncResult*)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::EndInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181509d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::Invoke(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainDataPtr, instances, snapToHeightmap);
}
inline ::System::IAsyncResult* MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::BeginInvoke(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, terrainDataPtr, instances, snapToHeightmap, callback, object);
}
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::EndInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, result);
}
inline ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate* MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate::__InteropDelegates_TerrainDataBurstInterop__SetTreeInstances_1_Delegate()   {
}
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815098b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>, ::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::by_ref<::Unity::Collections::Allocator>, ::by_ref<::UnityEngine::Bounds>)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::Invoke)> {
  constexpr static std::size_t size = 0x10a0;
  constexpr static std::size_t addrs = 0x18130a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>, ::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::by_ref<::Unity::Collections::Allocator>, ::by_ref<::UnityEngine::Bounds>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1815095f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>, ::by_ref<::Unity::Collections::Allocator>, ::by_ref<::UnityEngine::Bounds>, ::System::IAsyncResult*)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::EndInvoke)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x181509710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __returnValue, terrainDataPtr, patchX, patchY, layer, density, allocator, bounds);
}
inline ::System::IAsyncResult* MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, __returnValue, terrainDataPtr, patchX, patchY, layer, density, allocator, bounds, callback, object);
}
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::EndInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __returnValue, allocator, bounds, result);
}
inline ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate* MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate::__InteropDelegates_TerrainDataBurstInterop__ComputeDetailInstanceTransforms_2_Delegate()   {
}
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::*)(::System::Object*, ::System::IntPtr)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181509b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::*)(::by_ref<::UnityEngine::Vector3>, ::System::IntPtr, float_t, float_t)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::Invoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181509a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::*)(::by_ref<::UnityEngine::Vector3>, ::System::IntPtr, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181509970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::*)(::by_ref<::UnityEngine::Vector3>, ::System::IAsyncResult*)>(&::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(),
                    {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::Invoke(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IntPtr  terrainDataPtr, float_t  x, float_t  y)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __returnValue, terrainDataPtr, x, y);
}
inline ::System::IAsyncResult* MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::BeginInvoke(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IntPtr  terrainDataPtr, float_t  x, float_t  y, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, __returnValue, terrainDataPtr, x, y, callback, object);
}
inline void MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::EndInvoke(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __returnValue, result);
}
inline ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate* MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::Flora::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate::__InteropDelegates_TerrainDataBurstInterop__GetInterpolatedNormal_3_Delegate()   {
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDataBurstInterop___InteropDelegates::TerrainDataBurstInterop___InteropDelegates()   {
}
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> (*)(::System::IntPtr, ::Unity::Collections::Allocator)>(&::MA::Flora::TerrainDataBurstInterop::_GetTreeInstances)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815029b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._SetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>, bool)>(&::MA::Flora::TerrainDataBurstInterop::_SetTreeInstances)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181502dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_SetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._ComputeDetailInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> (*)(::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::Unity::Collections::Allocator, ::by_ref<::UnityEngine::Bounds>)>(&::MA::Flora::TerrainDataBurstInterop::_ComputeDetailInstanceTransforms)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181502770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._GetInterpolatedNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::IntPtr, float_t, float_t)>(&::MA::Flora::TerrainDataBurstInterop::_GetInterpolatedNormal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815028e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetInterpolatedNormal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop.__InteropIsBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>)>(&::MA::Flora::TerrainDataBurstInterop::__InteropIsBurst)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181477870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"__InteropIsBurst", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._EarlyInitInterop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TerrainDataBurstInterop::_EarlyInitInterop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181502810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_EarlyInitInterop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._LateInitInterop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TerrainDataBurstInterop::_LateInitInterop)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x181502a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_LateInitInterop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop.GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> (*)(::System::IntPtr, ::by_ref<::Unity::Collections::Allocator>)>(&::MA::Flora::TerrainDataBurstInterop::GetTreeInstances)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1815025e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._GetTreeInstances_0_ForwardFromBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, ::System::IntPtr, ::by_ref<::Unity::Collections::Allocator>)>(&::MA::Flora::TerrainDataBurstInterop::_GetTreeInstances_0_ForwardFromBurst)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181502950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetTreeInstances_0_ForwardFromBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._GetTreeInstances_0_ForwardFromManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, ::System::IntPtr, ::by_ref<::Unity::Collections::Allocator>)>(&::MA::Flora::TerrainDataBurstInterop::_GetTreeInstances_0_ForwardFromManaged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181502950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetTreeInstances_0_ForwardFromManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop.SetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, bool)>(&::MA::Flora::TerrainDataBurstInterop::SetTreeInstances)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181502650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._SetTreeInstances_1_ForwardFromBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, bool)>(&::MA::Flora::TerrainDataBurstInterop::_SetTreeInstances_1_ForwardFromBurst)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181502d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_SetTreeInstances_1_ForwardFromBurst", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._SetTreeInstances_1_ForwardFromManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>, bool)>(&::MA::Flora::TerrainDataBurstInterop::_SetTreeInstances_1_ForwardFromManaged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181502d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_SetTreeInstances_1_ForwardFromManaged", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop.ComputeDetailInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> (*)(::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::by_ref<::Unity::Collections::Allocator>, ::by_ref<::UnityEngine::Bounds>)>(&::MA::Flora::TerrainDataBurstInterop::ComputeDetailInstanceTransforms)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181502490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._ComputeDetailInstanceTransforms_2_ForwardFromBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>, ::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::by_ref<::Unity::Collections::Allocator>, ::by_ref<::UnityEngine::Bounds>)>(&::MA::Flora::TerrainDataBurstInterop::_ComputeDetailInstanceTransforms_2_ForwardFromBurst)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815026b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_ComputeDetailInstanceTransforms_2_ForwardFromBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._ComputeDetailInstanceTransforms_2_ForwardFromManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>, ::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::by_ref<::Unity::Collections::Allocator>, ::by_ref<::UnityEngine::Bounds>)>(&::MA::Flora::TerrainDataBurstInterop::_ComputeDetailInstanceTransforms_2_ForwardFromManaged)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1815026b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_ComputeDetailInstanceTransforms_2_ForwardFromManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop.GetInterpolatedNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::IntPtr, float_t, float_t)>(&::MA::Flora::TerrainDataBurstInterop::GetInterpolatedNormal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181502550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"GetInterpolatedNormal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._GetInterpolatedNormal_3_ForwardFromBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::System::IntPtr, float_t, float_t)>(&::MA::Flora::TerrainDataBurstInterop::_GetInterpolatedNormal_3_ForwardFromBurst)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181502860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetInterpolatedNormal_3_ForwardFromBurst", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataBurstInterop._GetInterpolatedNormal_3_ForwardFromManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::System::IntPtr, float_t, float_t)>(&::MA::Flora::TerrainDataBurstInterop::_GetInterpolatedNormal_3_ForwardFromManaged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181502860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetInterpolatedNormal_3_ForwardFromManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainDataBurstInterop::setStaticF__GetTreeInstances_0_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<uint64_t>, "_GetTreeInstances_0_BurstFP", ::MA::Flora::TerrainDataBurstInterop*>(std::forward<::Unity::Burst::SharedStatic_1<uint64_t>>(value));
}
inline ::Unity::Burst::SharedStatic_1<uint64_t> MA::Flora::TerrainDataBurstInterop::getStaticF__GetTreeInstances_0_BurstFP()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<uint64_t>, "_GetTreeInstances_0_BurstFP", ::MA::Flora::TerrainDataBurstInterop*>();
}
inline void MA::Flora::TerrainDataBurstInterop::setStaticF__SetTreeInstances_1_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<uint64_t>, "_SetTreeInstances_1_BurstFP", ::MA::Flora::TerrainDataBurstInterop*>(std::forward<::Unity::Burst::SharedStatic_1<uint64_t>>(value));
}
inline ::Unity::Burst::SharedStatic_1<uint64_t> MA::Flora::TerrainDataBurstInterop::getStaticF__SetTreeInstances_1_BurstFP()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<uint64_t>, "_SetTreeInstances_1_BurstFP", ::MA::Flora::TerrainDataBurstInterop*>();
}
inline void MA::Flora::TerrainDataBurstInterop::setStaticF__ComputeDetailInstanceTransforms_2_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<uint64_t>, "_ComputeDetailInstanceTransforms_2_BurstFP", ::MA::Flora::TerrainDataBurstInterop*>(std::forward<::Unity::Burst::SharedStatic_1<uint64_t>>(value));
}
inline ::Unity::Burst::SharedStatic_1<uint64_t> MA::Flora::TerrainDataBurstInterop::getStaticF__ComputeDetailInstanceTransforms_2_BurstFP()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<uint64_t>, "_ComputeDetailInstanceTransforms_2_BurstFP", ::MA::Flora::TerrainDataBurstInterop*>();
}
inline void MA::Flora::TerrainDataBurstInterop::setStaticF__GetInterpolatedNormal_3_BurstFP(::Unity::Burst::SharedStatic_1<uint64_t>  value)  {
::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<uint64_t>, "_GetInterpolatedNormal_3_BurstFP", ::MA::Flora::TerrainDataBurstInterop*>(std::forward<::Unity::Burst::SharedStatic_1<uint64_t>>(value));
}
inline ::Unity::Burst::SharedStatic_1<uint64_t> MA::Flora::TerrainDataBurstInterop::getStaticF__GetInterpolatedNormal_3_BurstFP()  {
return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<uint64_t>, "_GetInterpolatedNormal_3_BurstFP", ::MA::Flora::TerrainDataBurstInterop*>();
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> MA::Flora::TerrainDataBurstInterop::_GetTreeInstances(::System::IntPtr  terrainDataPtr, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(nullptr, ___internal_method, terrainDataPtr, allocator);
}
inline void MA::Flora::TerrainDataBurstInterop::_SetTreeInstances(::System::IntPtr  terrainDataPtr, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_SetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainDataPtr, instances, snapToHeightmap);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> MA::Flora::TerrainDataBurstInterop::_ComputeDetailInstanceTransforms(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>(nullptr, ___internal_method, terrainDataPtr, patchX, patchY, layer, density, allocator, bounds);
}
inline ::UnityEngine::Vector3 MA::Flora::TerrainDataBurstInterop::_GetInterpolatedNormal(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetInterpolatedNormal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, terrainDataPtr, x, y);
}
inline void MA::Flora::TerrainDataBurstInterop::__InteropIsBurst(::by_ref<bool>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"__InteropIsBurst", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status);
}
inline void MA::Flora::TerrainDataBurstInterop::_EarlyInitInterop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_EarlyInitInterop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void MA::Flora::TerrainDataBurstInterop::_LateInitInterop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_LateInitInterop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> MA::Flora::TerrainDataBurstInterop::GetTreeInstances(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(nullptr, ___internal_method, terrainDataPtr, allocator);
}
inline void MA::Flora::TerrainDataBurstInterop::_GetTreeInstances_0_ForwardFromBurst(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetTreeInstances_0_ForwardFromBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, __returnValue, terrainDataPtr, allocator);
}
inline void MA::Flora::TerrainDataBurstInterop::_GetTreeInstances_0_ForwardFromManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  __returnValue, ::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::Allocator>  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetTreeInstances_0_ForwardFromManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, __returnValue, terrainDataPtr, allocator);
}
inline void MA::Flora::TerrainDataBurstInterop::SetTreeInstances(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainDataPtr, instances, snapToHeightmap);
}
inline void MA::Flora::TerrainDataBurstInterop::_SetTreeInstances_1_ForwardFromBurst(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_SetTreeInstances_1_ForwardFromBurst", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainDataPtr, instances, snapToHeightmap);
}
inline void MA::Flora::TerrainDataBurstInterop::_SetTreeInstances_1_ForwardFromManaged(::System::IntPtr  terrainDataPtr, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_SetTreeInstances_1_ForwardFromManaged", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainDataPtr, instances, snapToHeightmap);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> MA::Flora::TerrainDataBurstInterop::ComputeDetailInstanceTransforms(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>(nullptr, ___internal_method, terrainDataPtr, patchX, patchY, layer, density, allocator, bounds);
}
inline void MA::Flora::TerrainDataBurstInterop::_ComputeDetailInstanceTransforms_2_ForwardFromBurst(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_ComputeDetailInstanceTransforms_2_ForwardFromBurst", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, __returnValue, terrainDataPtr, patchX, patchY, layer, density, allocator, bounds);
}
inline void MA::Flora::TerrainDataBurstInterop::_ComputeDetailInstanceTransforms_2_ForwardFromManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>  __returnValue, ::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::Unity::Collections::Allocator>  allocator, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_ComputeDetailInstanceTransforms_2_ForwardFromManaged", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::Allocator>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, __returnValue, terrainDataPtr, patchX, patchY, layer, density, allocator, bounds);
}
inline ::UnityEngine::Vector3 MA::Flora::TerrainDataBurstInterop::GetInterpolatedNormal(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"GetInterpolatedNormal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, terrainDataPtr, x, y);
}
inline void MA::Flora::TerrainDataBurstInterop::_GetInterpolatedNormal_3_ForwardFromBurst(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IntPtr  terrainDataPtr, float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetInterpolatedNormal_3_ForwardFromBurst", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, __returnValue, terrainDataPtr, x, y);
}
inline void MA::Flora::TerrainDataBurstInterop::_GetInterpolatedNormal_3_ForwardFromManaged(::by_ref<::UnityEngine::Vector3>  __returnValue, ::System::IntPtr  terrainDataPtr, float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataBurstInterop*>(),
                        {"_GetInterpolatedNormal_3_ForwardFromManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, __returnValue, terrainDataPtr, x, y);
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDataBurstInterop::TerrainDataBurstInterop()   {
}
