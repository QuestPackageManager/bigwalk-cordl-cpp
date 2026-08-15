#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyInviteAcceptedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyInviteAcceptedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyInviteAcceptedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyInviteAcceptedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteAcceptedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallbackInternalImplementation::OnLobbyInviteAcceptedCallbackInternalImplementation()   {
}
