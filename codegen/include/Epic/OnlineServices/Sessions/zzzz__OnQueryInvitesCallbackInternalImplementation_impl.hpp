#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnQueryInvitesCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnQueryInvitesCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnQueryInvitesCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__QueryInvitesCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e9f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e9f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal* Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal* Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::QueryInvitesCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnQueryInvitesCallbackInternalImplementation::OnQueryInvitesCallbackInternalImplementation()   {
}
