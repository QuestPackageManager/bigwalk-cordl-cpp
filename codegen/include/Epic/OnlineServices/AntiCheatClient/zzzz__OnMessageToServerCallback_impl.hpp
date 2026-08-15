#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnMessageToServerCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToServerCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToServerCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo>)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052ffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::Invoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::EndInvoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback* Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallback::OnMessageToServerCallback()   {
}
