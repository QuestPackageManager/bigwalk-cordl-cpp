#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUpdateSendingCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateSendingCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateSendingCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateSendingCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ece20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ecd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal* Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal* Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnUpdateSendingCallbackInternalImplementation::OnUpdateSendingCallbackInternalImplementation()   {
}
