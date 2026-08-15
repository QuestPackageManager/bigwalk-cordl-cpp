#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnClientIntegrityViolatedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallback_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnClientIntegrityViolatedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052f450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::Invoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback* Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnClientIntegrityViolatedCallback::OnClientIntegrityViolatedCallback()   {
}
