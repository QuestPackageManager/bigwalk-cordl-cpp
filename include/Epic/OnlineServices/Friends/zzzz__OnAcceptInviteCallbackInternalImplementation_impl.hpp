#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Friends/OnAcceptInviteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnAcceptInviteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__AcceptInviteCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Friends/zzzz__OnAcceptInviteCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal* (*)()>(&::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180518940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Friends::AcceptInviteCallbackInfoInternal>)>(&::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805188e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AcceptInviteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal* Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal* Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Friends::AcceptInviteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Friends::AcceptInviteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Friends::OnAcceptInviteCallbackInternalImplementation::OnAcceptInviteCallbackInternalImplementation()   {
}
