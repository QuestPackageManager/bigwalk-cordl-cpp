#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyMemberUpdateReceivedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyMemberUpdateReceivedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberUpdateReceivedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyMemberUpdateReceivedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050f710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050f6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberUpdateReceivedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallbackInternalImplementation::OnLobbyMemberUpdateReceivedCallbackInternalImplementation()   {
}
