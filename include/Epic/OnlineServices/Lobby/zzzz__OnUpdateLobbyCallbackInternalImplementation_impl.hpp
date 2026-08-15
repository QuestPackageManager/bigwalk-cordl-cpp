#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnUpdateLobbyCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnUpdateLobbyCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnUpdateLobbyCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__UpdateLobbyCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180510c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180510bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallbackInternalImplementation::OnUpdateLobbyCallbackInternalImplementation()   {
}
