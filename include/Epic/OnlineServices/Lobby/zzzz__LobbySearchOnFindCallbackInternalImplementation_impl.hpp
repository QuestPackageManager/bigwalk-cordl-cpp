#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchOnFindCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchOnFindCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchFindCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbySearchOnFindCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050b3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal* Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal* Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbySearchOnFindCallbackInternalImplementation::LobbySearchOnFindCallbackInternalImplementation()   {
}
