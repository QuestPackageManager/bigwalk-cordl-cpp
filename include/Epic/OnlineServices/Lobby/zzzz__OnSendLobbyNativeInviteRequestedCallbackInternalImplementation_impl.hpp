#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnSendLobbyNativeInviteRequestedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnSendLobbyNativeInviteRequestedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnSendLobbyNativeInviteRequestedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__SendLobbyNativeInviteRequestedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805107a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180510730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal* Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal* Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::SendLobbyNativeInviteRequestedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation::OnSendLobbyNativeInviteRequestedCallbackInternalImplementation()   {
}
