#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnSessionInviteAcceptedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteAcceptedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteAcceptedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionInviteAcceptedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804eb1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804eb150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal* Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal* Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallbackInternalImplementation::OnSessionInviteAcceptedCallbackInternalImplementation()   {
}
