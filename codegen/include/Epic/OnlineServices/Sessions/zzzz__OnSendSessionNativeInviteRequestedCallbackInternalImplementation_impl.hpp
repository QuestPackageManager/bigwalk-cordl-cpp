#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnSendSessionNativeInviteRequestedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSendSessionNativeInviteRequestedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSendSessionNativeInviteRequestedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SendSessionNativeInviteRequestedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804eaf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::SendSessionNativeInviteRequestedCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804eaf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SendSessionNativeInviteRequestedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal* Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal* Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::SendSessionNativeInviteRequestedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SendSessionNativeInviteRequestedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnSendSessionNativeInviteRequestedCallbackInternalImplementation::OnSendSessionNativeInviteRequestedCallbackInternalImplementation()   {
}
