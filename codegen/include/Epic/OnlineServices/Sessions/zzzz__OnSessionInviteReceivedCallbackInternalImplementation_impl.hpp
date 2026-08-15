#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnSessionInviteReceivedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteReceivedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteReceivedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionInviteReceivedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804eb400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804eb3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal* Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal* Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionInviteReceivedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallbackInternalImplementation::OnSessionInviteReceivedCallbackInternalImplementation()   {
}
