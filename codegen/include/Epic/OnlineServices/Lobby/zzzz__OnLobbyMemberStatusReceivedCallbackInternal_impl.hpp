#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyMemberStatusReceivedCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyMemberStatusReceivedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberStatusReceivedCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal::OnLobbyMemberStatusReceivedCallbackInternal()   {
}
