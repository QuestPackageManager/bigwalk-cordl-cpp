#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnMessageToPeerCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToPeerCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__OnMessageToClientCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::Invoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::EndInvoke(::by_ref<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback* Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnMessageToPeerCallback::OnMessageToPeerCallback()   {
}
