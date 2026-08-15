#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnLeaveSessionRequestedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnLeaveSessionRequestedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__LeaveSessionRequestedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnLeaveSessionRequestedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e93b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::LeaveSessionRequestedCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e9350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::LeaveSessionRequestedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal* Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal* Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::LeaveSessionRequestedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::LeaveSessionRequestedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnLeaveSessionRequestedCallbackInternalImplementation::OnLeaveSessionRequestedCallbackInternalImplementation()   {
}
