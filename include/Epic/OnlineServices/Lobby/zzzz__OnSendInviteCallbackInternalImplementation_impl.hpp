#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnSendInviteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnSendInviteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnSendInviteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__SendInviteCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180510550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::SendInviteCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805104f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::SendInviteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal* Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal* Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::SendInviteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::SendInviteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnSendInviteCallbackInternalImplementation::OnSendInviteCallbackInternalImplementation()   {
}
