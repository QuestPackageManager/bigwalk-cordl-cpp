#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnJoinLobbyAcceptedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnJoinLobbyAcceptedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinLobbyAcceptedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnJoinLobbyAcceptedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050dbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyAcceptedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050db90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyAcceptedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal* Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal* Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyAcceptedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyAcceptedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallbackInternalImplementation::OnJoinLobbyAcceptedCallbackInternalImplementation()   {
}
