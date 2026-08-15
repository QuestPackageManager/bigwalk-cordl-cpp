#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnJoinLobbyByIdCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnJoinLobbyByIdCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__JoinLobbyByIdCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnJoinLobbyByIdCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050de30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050ddd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal* Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal* Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyByIdCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnJoinLobbyByIdCallbackInternalImplementation::OnJoinLobbyByIdCallbackInternalImplementation()   {
}
