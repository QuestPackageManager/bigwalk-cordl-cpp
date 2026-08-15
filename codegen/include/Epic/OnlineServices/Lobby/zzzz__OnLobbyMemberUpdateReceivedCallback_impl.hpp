#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyMemberUpdateReceivedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyMemberUpdateReceivedCallback_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberUpdateReceivedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo>)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050f890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::Invoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback* Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback::OnLobbyMemberUpdateReceivedCallback()   {
}
