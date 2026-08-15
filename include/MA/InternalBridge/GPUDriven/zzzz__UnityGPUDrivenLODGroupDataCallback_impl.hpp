#pragma once
// IWYU pragma private; include "MA/InternalBridge/GPUDriven/UnityGPUDrivenLODGroupDataCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenLODGroupDataCallback_def.hpp"
#include "MA/InternalBridge/GPUDriven/zzzz__UnityGPUDrivenLODGroupData_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::*)(::System::Object*, ::System::IntPtr)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::*)(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(),
                    {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::*)(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>, ::System::AsyncCallback*, ::System::Object*)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ecde30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(),
                    {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::*)(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>, ::System::IAsyncResult*)>(&::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181509d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(),
                    {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::Invoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>  lodGroupData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodGroupData);
}
inline ::System::IAsyncResult* MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::BeginInvoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>  lodGroupData, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, lodGroupData, callback, object);
}
inline void MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::EndInvoke(::by_ref<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupData>  lodGroupData, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lodGroupData, result);
}
inline ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback* MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::GPUDriven::UnityGPUDrivenLODGroupDataCallback::UnityGPUDrivenLODGroupDataCallback()   {
}
