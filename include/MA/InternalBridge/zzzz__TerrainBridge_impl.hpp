#pragma once
// IWYU pragma private; include "MA/InternalBridge/TerrainBridge.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/zzzz__TerrainBridge_def.hpp"
#include "MA/InternalBridge/zzzz__TerrainBridge_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__DetailInstanceTransform_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::*)(::System::Object*, ::System::IntPtr)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ecc530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::*)(::System::IntPtr, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::Invoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ecc440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::*)(::System::IntPtr, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::BeginInvoke)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ecc390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::*)(::by_ref<::UnityEngine::Vector3>, ::System::IAsyncResult*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::Invoke(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y, ::by_ref<::UnityEngine::Vector3>  normal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainDataPtr, x, y, normal);
}
inline ::System::IAsyncResult* MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::BeginInvoke(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y, ::by_ref<::UnityEngine::Vector3>  normal, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, terrainDataPtr, x, y, normal, callback, object);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::EndInvoke(::by_ref<::UnityEngine::Vector3>  normal, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normal, result);
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected* MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected()   {
}
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::*)(::System::Object*, ::System::IntPtr)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180552900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ecc7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::*)(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::System::IAsyncResult*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::Invoke(::System::IntPtr  terrainDataPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  treeInstances)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainDataPtr, treeInstances);
}
inline ::System::IAsyncResult* MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::BeginInvoke(::System::IntPtr  terrainDataPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  treeInstances, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, terrainDataPtr, treeInstances, callback, object);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::EndInvoke(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  treeInstances, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, treeInstances, result);
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected* MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected()   {
}
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::*)(::System::Object*, ::System::IntPtr)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181509da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, bool, ::System::AsyncCallback*, ::System::Object*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181eccb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::IAsyncResult*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::Invoke(::System::IntPtr  terrainDataPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  instances, bool  snapToHeightmap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainDataPtr, instances, snapToHeightmap);
}
inline ::System::IAsyncResult* MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::BeginInvoke(::System::IntPtr  terrainDataPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  instances, bool  snapToHeightmap, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, terrainDataPtr, instances, snapToHeightmap, callback, object);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::EndInvoke(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  instances, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instances, result);
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected* MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected()   {
}
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::*)(::System::Object*, ::System::IntPtr)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181ecc1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::*)(::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::Invoke)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804a33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::*)(::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::BeginInvoke)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181ecbf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::*)(::by_ref<::UnityEngine::Bounds>, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>, ::System::IAsyncResult*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::EndInvoke)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181399bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::Invoke(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainDataPtr, patchX, patchY, layer, density, bounds, ret);
}
inline ::System::IAsyncResult* MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::BeginInvoke(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, terrainDataPtr, patchX, patchY, layer, density, bounds, ret, callback, object);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::EndInvoke(::by_ref<::UnityEngine::Bounds>  bounds, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bounds, ret, result);
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected* MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected()   {
}
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::*)(::System::Object*, ::System::IntPtr)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181eccaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::Invoke)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804a33d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::BeginInvoke)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181ecc870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::IAsyncResult*)>(&::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(),
                    {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::Invoke(::System::IntPtr  terrainDataPtr, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, terrainDataPtr, xBase, yBase, totalWidth, totalHeight, detailIndex, data);
}
inline ::System::IAsyncResult* MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::BeginInvoke(::System::IntPtr  terrainDataPtr, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, terrainDataPtr, xBase, yBase, totalWidth, totalHeight, detailIndex, data, callback, object);
}
inline void MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::EndInvoke(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected* MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected()   {
}
inline void MA::InternalBridge::TerrainBridge_TerrainDataInternal::setStaticF_GetInterpolatedNormal(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*  value)  {
::cordl_internals::setStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*, "GetInterpolatedNormal", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>(std::forward<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*>(value));
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected* MA::InternalBridge::TerrainBridge_TerrainDataInternal::getStaticF_GetInterpolatedNormal()  {
return ::cordl_internals::getStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_GetInterpolatedNormalInjected*, "GetInterpolatedNormal", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>();
}
inline void MA::InternalBridge::TerrainBridge_TerrainDataInternal::setStaticF_GetTreeInstances(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*  value)  {
::cordl_internals::setStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*, "GetTreeInstances", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>(std::forward<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*>(value));
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected* MA::InternalBridge::TerrainBridge_TerrainDataInternal::getStaticF_GetTreeInstances()  {
return ::cordl_internals::getStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalGetTreeInstancesInjected*, "GetTreeInstances", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>();
}
inline void MA::InternalBridge::TerrainBridge_TerrainDataInternal::setStaticF_SetTreeInstances(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*  value)  {
::cordl_internals::setStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*, "SetTreeInstances", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>(std::forward<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*>(value));
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected* MA::InternalBridge::TerrainBridge_TerrainDataInternal::getStaticF_SetTreeInstances()  {
return ::cordl_internals::getStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetTreeInstancesInjected*, "SetTreeInstances", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>();
}
inline void MA::InternalBridge::TerrainBridge_TerrainDataInternal::setStaticF_ComputeDetailInstanceTransforms(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*  value)  {
::cordl_internals::setStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*, "ComputeDetailInstanceTransforms", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>(std::forward<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*>(value));
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected* MA::InternalBridge::TerrainBridge_TerrainDataInternal::getStaticF_ComputeDetailInstanceTransforms()  {
return ::cordl_internals::getStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_ComputeDetailInstanceTransformsInjected*, "ComputeDetailInstanceTransforms", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>();
}
inline void MA::InternalBridge::TerrainBridge_TerrainDataInternal::setStaticF_SetDetailLayer(::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*  value)  {
::cordl_internals::setStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*, "SetDetailLayer", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>(std::forward<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*>(value));
}
inline ::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected* MA::InternalBridge::TerrainBridge_TerrainDataInternal::getStaticF_SetDetailLayer()  {
return ::cordl_internals::getStaticField<::MA::InternalBridge::TerrainDataInternal_TerrainBridge_InternalSetDetailLayerInjected*, "SetDetailLayer", ::MA::InternalBridge::TerrainBridge_TerrainDataInternal*>();
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::TerrainBridge_TerrainDataInternal::TerrainBridge_TerrainDataInternal()   {
}
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::*)(::System::Object*, ::System::IntPtr)>(&::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181ecc740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::*)(::UnityEngine::EntityId, ::System::Type*, ::by_ref<bool>)>(&::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(),
                    {::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::*)(::UnityEngine::EntityId, ::System::Type*, ::by_ref<bool>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ecc5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(),
                    {::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::*)(::by_ref<bool>, ::System::IAsyncResult*)>(&::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::EndInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ecc660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(),
                    {::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::IntPtr MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::Invoke(::UnityEngine::EntityId  instanceID, ::System::Type*  objectType, ::by_ref<bool>  isMonoBehaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, instanceID, objectType, isMonoBehaviour);
}
inline ::System::IAsyncResult* MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::BeginInvoke(::UnityEngine::EntityId  instanceID, ::System::Type*  objectType, ::by_ref<bool>  isMonoBehaviour, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, instanceID, objectType, isMonoBehaviour, callback, object);
}
inline ::System::IntPtr MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::EndInvoke(::by_ref<bool>  isMonoBehaviour, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, isMonoBehaviour, result);
}
inline ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate* MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate()   {
}
inline void MA::InternalBridge::TerrainBridge_UnityObjectInternal::setStaticF_GetPtrFromInstanceID(::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*  value)  {
::cordl_internals::setStaticField<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*, "GetPtrFromInstanceID", ::MA::InternalBridge::TerrainBridge_UnityObjectInternal*>(std::forward<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*>(value));
}
inline ::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate* MA::InternalBridge::TerrainBridge_UnityObjectInternal::getStaticF_GetPtrFromInstanceID()  {
return ::cordl_internals::getStaticField<::MA::InternalBridge::UnityObjectInternal_TerrainBridge_GetPtrFromInstanceIDPrivate*, "GetPtrFromInstanceID", ::MA::InternalBridge::TerrainBridge_UnityObjectInternal*>();
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::TerrainBridge_UnityObjectInternal::TerrainBridge_UnityObjectInternal()   {
}
template<typename T>
constexpr ::ArrayW<T>& MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr ::ArrayW<T> const& MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr void MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_set__items(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename T>
constexpr int32_t& MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
template<typename T>
constexpr int32_t const& MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
template<typename T>
constexpr void MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_set__size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
template<typename T>
constexpr int32_t& MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_get__version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
template<typename T>
constexpr int32_t const& MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_get__version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____version;
}
template<typename T>
constexpr void MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::__cordl_internal_set__version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____version = value;
}
template<typename T>
inline void MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>* MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::MA::InternalBridge::TerrainBridge_ListPrivateFieldAccess_1<T>::TerrainBridge_ListPrivateFieldAccess_1()   {
}
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.RemoveTreePrototype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, int32_t)>(&::MA::InternalBridge::TerrainBridge::RemoveTreePrototype)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ecd490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"RemoveTreePrototype", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.GetInterpolatedNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::IntPtr, float_t, float_t)>(&::MA::InternalBridge::TerrainBridge::GetInterpolatedNormal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181eccfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetInterpolatedNormal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, ::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>*)>(&::MA::InternalBridge::TerrainBridge::GetTreeInstances)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181ecd390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, ::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>)>(&::MA::InternalBridge::TerrainBridge::GetTreeInstances)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181ecd010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> (*)(::UnityEngine::TerrainData*, ::Unity::Collections::Allocator)>(&::MA::InternalBridge::TerrainBridge::GetTreeInstances)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181ecd160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> (*)(::System::IntPtr, ::Unity::Collections::Allocator)>(&::MA::InternalBridge::TerrainBridge::GetTreeInstances)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ecd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.SetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>, bool)>(&::MA::InternalBridge::TerrainBridge::SetTreeInstances)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ecd590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.SetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>, bool)>(&::MA::InternalBridge::TerrainBridge::SetTreeInstances)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ecd680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.ComputeDetailInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> (*)(::UnityEngine::TerrainData*, int32_t, int32_t, int32_t, float_t, ::Unity::Collections::Allocator, ::by_ref<::UnityEngine::Bounds>)>(&::MA::InternalBridge::TerrainBridge::ComputeDetailInstanceTransforms)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181eccdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.ComputeDetailInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> (*)(::System::IntPtr, int32_t, int32_t, int32_t, float_t, ::Unity::Collections::Allocator, ::by_ref<::UnityEngine::Bounds>)>(&::MA::InternalBridge::TerrainBridge::ComputeDetailInstanceTransforms)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181eccc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::TerrainBridge.SetDetailLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, int32_t, int32_t, int32_t, int32_t, int32_t, ::Unity::Collections::NativeArray_1<int32_t>)>(&::MA::InternalBridge::TerrainBridge::SetDetailLayer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ecd4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"SetDetailLayer", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::System::IntPtr MA::InternalBridge::TerrainBridge::MarshalFromInstanceId(int32_t  instanceId)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                    {"MarshalFromInstanceId", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, instanceId);
}
inline void MA::InternalBridge::TerrainBridge::RemoveTreePrototype(::UnityEngine::TerrainData*  terrainData, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"RemoveTreePrototype", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, index);
}
inline ::UnityEngine::Vector3 MA::InternalBridge::TerrainBridge::GetInterpolatedNormal(::System::IntPtr  terrainDataPtr, float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetInterpolatedNormal", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, terrainDataPtr, x, y);
}
inline void MA::InternalBridge::TerrainBridge::GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>*  treeInstances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, treeInstances);
}
inline void MA::InternalBridge::TerrainBridge::GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>  treeInstances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, treeInstances);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> MA::InternalBridge::TerrainBridge::GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(nullptr, ___internal_method, terrainData, allocator);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> MA::InternalBridge::TerrainBridge::GetTreeInstances(::System::IntPtr  terrainDataPtr, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(nullptr, ___internal_method, terrainDataPtr, allocator);
}
inline void MA::InternalBridge::TerrainBridge::SetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, instances, snapToHeightmap);
}
inline void MA::InternalBridge::TerrainBridge::SetTreeInstances(::System::IntPtr  terrainDataPtr, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainDataPtr, instances, snapToHeightmap);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> MA::InternalBridge::TerrainBridge::ComputeDetailInstanceTransforms(::UnityEngine::TerrainData*  terrainData, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>(nullptr, ___internal_method, terrainData, patchX, patchY, layer, density, allocator, bounds);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> MA::InternalBridge::TerrainBridge::ComputeDetailInstanceTransforms(::System::IntPtr  terrainDataPtr, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>(nullptr, ___internal_method, terrainDataPtr, patchX, patchY, layer, density, allocator, bounds);
}
inline void MA::InternalBridge::TerrainBridge::SetDetailLayer(::UnityEngine::TerrainData*  terrainData, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::Unity::Collections::NativeArray_1<int32_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                        {"SetDetailLayer", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, xBase, yBase, totalWidth, totalHeight, detailIndex, data);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> MA::InternalBridge::TerrainBridge::ToNativeArray(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  array, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                    {"ToNativeArray", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, array, allocator);
}
template<typename T>
inline void MA::InternalBridge::TerrainBridge::GetValues(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  array, ::Unity::Collections::NativeList_1<T>  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                    {"GetValues", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, list);
}
template<typename T>
inline ::ArrayW<T> MA::InternalBridge::TerrainBridge::ExtractArrayFromListT(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                    {"ExtractArrayFromListT", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, list);
}
template<typename T>
inline void MA::InternalBridge::TerrainBridge::EnsureListElemCount(::System::Collections::Generic::List_1<T>*  list, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::TerrainBridge*>(),
                    {"EnsureListElemCount", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, count);
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::TerrainBridge::TerrainBridge()   {
}
