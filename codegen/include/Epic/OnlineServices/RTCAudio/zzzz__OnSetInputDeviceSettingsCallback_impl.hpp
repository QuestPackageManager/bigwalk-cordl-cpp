#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnSetInputDeviceSettingsCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetInputDeviceSettingsCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetInputDeviceSettingsCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>)>(&::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804eba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::Invoke(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::EndInvoke(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback* Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnSetInputDeviceSettingsCallback::OnSetInputDeviceSettingsCallback()   {
}
