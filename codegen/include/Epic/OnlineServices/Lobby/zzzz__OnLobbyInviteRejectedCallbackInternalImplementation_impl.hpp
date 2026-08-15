#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyInviteRejectedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyInviteRejectedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyInviteRejectedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyInviteRejectedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteRejectedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18050f220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteRejectedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteRejectedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyInviteRejectedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLobbyInviteRejectedCallbackInternalImplementation::OnLobbyInviteRejectedCallbackInternalImplementation()   {
}
