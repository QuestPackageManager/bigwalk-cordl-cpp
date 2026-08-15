#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/OnClientAuthStatusChangedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__OnClientAuthStatusChangedCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnClientAuthStatusChangedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>)>(&::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180527130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::Invoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback* Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::OnClientAuthStatusChangedCallback::OnClientAuthStatusChangedCallback()   {
}
