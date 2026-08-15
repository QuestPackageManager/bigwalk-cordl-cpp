#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRequestToJoinRejectedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinRejectedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinRejectedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinRejectedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal* (*)()>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180529b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180529ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal* Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal* Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnRequestToJoinRejectedCallbackInternalImplementation::OnRequestToJoinRejectedCallbackInternalImplementation()   {
}
