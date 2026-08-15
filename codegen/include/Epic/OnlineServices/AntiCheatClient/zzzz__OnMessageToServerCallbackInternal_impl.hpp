#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/OnMessageToServerCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToServerCallbackInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__OnMessageToServerCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal* Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::OnMessageToServerCallbackInternal::OnMessageToServerCallbackInternal()   {
}
