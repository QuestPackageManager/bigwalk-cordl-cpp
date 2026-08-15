#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnCustomInviteAcceptedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteAcceptedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteAcceptedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnCustomInviteAcceptedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal* (*)()>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805195d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfoInternal>)>(&::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180519560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal* Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal* Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnCustomInviteAcceptedCallbackInternalImplementation::OnCustomInviteAcceptedCallbackInternalImplementation()   {
}
