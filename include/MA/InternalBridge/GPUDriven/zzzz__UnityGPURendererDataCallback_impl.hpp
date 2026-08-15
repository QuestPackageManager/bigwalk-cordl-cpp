#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPURendererDataCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPURendererDataCallback_def.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenRendererGroupData_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::*)(::System::Object*, ::System::IntPtr)>(&::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1814e3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::*)(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*)>(&::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::Invoke)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1803828b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(),
                    {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::*)(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*, ::System::AsyncCallback*, ::System::Object*)>(&::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ece7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(),
                    {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::*)(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>, ::System::IAsyncResult*)>(&::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181509d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(),
                    {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::Invoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>  rendererData, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*  materials)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererData, meshes, materials);
}
inline ::System::IAsyncResult* MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::BeginInvoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>  rendererData, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Mesh>>*  meshes, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Material>>*  materials, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, rendererData, meshes, materials, callback, object);
}
inline void MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::EndInvoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenRendererGroupData>  rendererData, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendererData, result);
}
inline ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback* MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GPUDriven::UnityGPURendererDataCallback::UnityGPURendererDataCallback()   {
}
