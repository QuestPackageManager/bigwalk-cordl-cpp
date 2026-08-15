#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnRejectInviteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnRejectInviteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnRejectInviteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__RejectInviteCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ea8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::RejectInviteCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ea840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RejectInviteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal* Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal* Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::RejectInviteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::RejectInviteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnRejectInviteCallbackInternalImplementation::OnRejectInviteCallbackInternalImplementation()   {
}
