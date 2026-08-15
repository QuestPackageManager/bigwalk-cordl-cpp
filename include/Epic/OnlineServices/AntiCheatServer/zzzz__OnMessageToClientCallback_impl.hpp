#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/OnMessageToClientCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnMessageToClientCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnMessageToClientCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>)>(&::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::Invoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::EndInvoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback* Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::OnMessageToClientCallback::OnMessageToClientCallback()   {
}
