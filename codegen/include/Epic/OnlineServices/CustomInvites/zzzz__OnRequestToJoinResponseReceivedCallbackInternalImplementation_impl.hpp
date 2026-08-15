#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRequestToJoinResponseReceivedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinResponseReceivedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinResponseReceivedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponseReceivedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal* (*)()>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180529d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180529d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal* Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal* Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallbackInternalImplementation::OnRequestToJoinResponseReceivedCallbackInternalImplementation()   {
}
