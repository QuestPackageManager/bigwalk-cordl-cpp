#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/OnQueryInvitesCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnQueryInvitesCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__OnQueryInvitesCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__QueryInvitesCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal* (*)()>(&::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18050fdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfoInternal>)>(&::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18050fd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal* Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal* Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::QueryInvitesCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::OnQueryInvitesCallbackInternalImplementation::OnQueryInvitesCallbackInternalImplementation()   {
}
