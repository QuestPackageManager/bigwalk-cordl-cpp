#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnCreateLobbyCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnCreateLobbyCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CreateLobbyCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnCreateLobbyCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050d040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnCreateLobbyCallbackInternalImplementation::OnCreateLobbyCallbackInternalImplementation()   {
}
