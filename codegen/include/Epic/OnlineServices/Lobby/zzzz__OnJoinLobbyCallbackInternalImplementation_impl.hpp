#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnJoinLobbyCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnJoinLobbyCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinLobbyCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnJoinLobbyCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050e070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050e010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnJoinLobbyCallbackInternalImplementation::OnJoinLobbyCallbackInternalImplementation()   {
}
