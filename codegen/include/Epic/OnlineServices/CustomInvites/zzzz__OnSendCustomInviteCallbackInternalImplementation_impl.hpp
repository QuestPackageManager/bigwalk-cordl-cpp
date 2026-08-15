#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnSendCustomInviteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendCustomInviteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendCustomInviteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendCustomInviteCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal* (*)()>(&::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180529fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180529f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal* Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal* Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomInviteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnSendCustomInviteCallbackInternalImplementation::OnSendCustomInviteCallbackInternalImplementation()   {
}
