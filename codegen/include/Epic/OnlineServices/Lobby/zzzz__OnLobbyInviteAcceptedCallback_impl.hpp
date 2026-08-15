#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyInviteAcceptedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyInviteAcceptedCallback_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyInviteAcceptedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo>)>(&::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050ef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::Invoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback* Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback::OnLobbyInviteAcceptedCallback()   {
}
