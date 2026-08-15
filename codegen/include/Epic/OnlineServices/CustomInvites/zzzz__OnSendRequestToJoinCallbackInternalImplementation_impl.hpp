#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnSendRequestToJoinCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendRequestToJoinCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendRequestToJoinCallbackInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendRequestToJoinCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal* (*)()>(&::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052a440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052a3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal* Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal* Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendRequestToJoinCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnSendRequestToJoinCallbackInternalImplementation::OnSendRequestToJoinCallbackInternalImplementation()   {
}
