#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLeaveLobbyCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLeaveLobbyCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LeaveLobbyCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLeaveLobbyCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050e730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050e6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal* Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallbackInternalImplementation::OnLeaveLobbyCallbackInternalImplementation()   {
}
