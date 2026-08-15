#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnLeaveLobbyRequestedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLeaveLobbyRequestedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LeaveLobbyRequestedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnLeaveLobbyRequestedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050e970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050e910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal* Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal* Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyRequestedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnLeaveLobbyRequestedCallbackInternalImplementation::OnLeaveLobbyRequestedCallbackInternalImplementation()   {
}
