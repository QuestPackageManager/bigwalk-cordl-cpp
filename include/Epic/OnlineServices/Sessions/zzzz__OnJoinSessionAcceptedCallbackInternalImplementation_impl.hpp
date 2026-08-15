#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnJoinSessionAcceptedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnJoinSessionAcceptedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__JoinSessionAcceptedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnJoinSessionAcceptedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e8f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e8ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal* Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal* Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::JoinSessionAcceptedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallbackInternalImplementation::OnJoinSessionAcceptedCallbackInternalImplementation()   {
}
