#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnSendInviteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnSendInviteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnSendInviteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__SendInviteCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal* (*)()>(&::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051c620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Friends::SendInviteCallbackInfoInternal>)>(&::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051c5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::SendInviteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal* Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal* Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Friends::SendInviteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::SendInviteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::OnSendInviteCallbackInternalImplementation::OnSendInviteCallbackInternalImplementation()   {
}
