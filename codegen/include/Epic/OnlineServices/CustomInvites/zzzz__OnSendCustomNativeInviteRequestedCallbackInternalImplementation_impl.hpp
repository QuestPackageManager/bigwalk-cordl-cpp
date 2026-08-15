#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnSendCustomNativeInviteRequestedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendCustomNativeInviteRequestedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendCustomNativeInviteRequestedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendCustomNativeInviteRequestedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal* (*)()>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052a200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18052a190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal* Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal* Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallbackInternalImplementation::OnSendCustomNativeInviteRequestedCallbackInternalImplementation()   {
}
