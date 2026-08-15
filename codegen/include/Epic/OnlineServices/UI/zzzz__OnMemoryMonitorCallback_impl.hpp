#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnMemoryMonitorCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnMemoryMonitorCallback_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__MemoryMonitorCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnMemoryMonitorCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnMemoryMonitorCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::UI::OnMemoryMonitorCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnMemoryMonitorCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnMemoryMonitorCallback::*)(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>)>(&::Epic::OnlineServices::UI::OnMemoryMonitorCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnMemoryMonitorCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::UI::OnMemoryMonitorCallback::*)(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::UI::OnMemoryMonitorCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804dd5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnMemoryMonitorCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::OnMemoryMonitorCallback::*)(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::UI::OnMemoryMonitorCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnMemoryMonitorCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::UI::OnMemoryMonitorCallback::Invoke(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::UI::OnMemoryMonitorCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::UI::OnMemoryMonitorCallback::EndInvoke(::by_ref<::Epic::OnlineServices::UI::MemoryMonitorCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::UI::OnMemoryMonitorCallback* Epic::OnlineServices::UI::OnMemoryMonitorCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UI::OnMemoryMonitorCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnMemoryMonitorCallback::OnMemoryMonitorCallback()   {
}
