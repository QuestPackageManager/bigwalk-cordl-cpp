#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLobbyMemberStatusReceivedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyMemberStatusReceivedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyMemberStatusReceivedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLobbyMemberStatusReceivedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050f4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050f470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal* Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallbackInternalImplementation::OnLobbyMemberStatusReceivedCallbackInternalImplementation()   {
}
