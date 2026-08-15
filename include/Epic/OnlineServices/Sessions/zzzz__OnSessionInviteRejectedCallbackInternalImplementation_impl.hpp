#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnSessionInviteRejectedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteRejectedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteRejectedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionInviteRejectedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804eb650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804eb5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal* Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal* Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionInviteRejectedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnSessionInviteRejectedCallbackInternalImplementation::OnSessionInviteRejectedCallbackInternalImplementation()   {
}
