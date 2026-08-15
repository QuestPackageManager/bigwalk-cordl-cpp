#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnCustomInviteReceivedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteReceivedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteReceivedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteReceivedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal* (*)()>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180519850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805197e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal* Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal* Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnCustomInviteReceivedCallbackInternalImplementation::OnCustomInviteReceivedCallbackInternalImplementation()   {
}
