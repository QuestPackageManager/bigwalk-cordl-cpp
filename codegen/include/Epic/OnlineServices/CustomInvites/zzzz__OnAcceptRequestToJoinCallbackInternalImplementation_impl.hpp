#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnAcceptRequestToJoinCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnAcceptRequestToJoinCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__AcceptRequestToJoinCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnAcceptRequestToJoinCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal* (*)()>(&::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180518b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180518b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal* Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal* Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::AcceptRequestToJoinCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnAcceptRequestToJoinCallbackInternalImplementation::OnAcceptRequestToJoinCallbackInternalImplementation()   {
}
