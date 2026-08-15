#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUpdateSendingVolumeCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateSendingVolumeCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateSendingVolumeCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateSendingVolumeCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ed250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ed1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal* Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal* Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateSendingVolumeCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnUpdateSendingVolumeCallbackInternalImplementation::OnUpdateSendingVolumeCallbackInternalImplementation()   {
}
