#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUpdateReceivingVolumeCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateReceivingVolumeCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateReceivingVolumeCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateReceivingVolumeCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ecb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ecaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal* Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal* Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::UpdateReceivingVolumeCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnUpdateReceivingVolumeCallbackInternalImplementation::OnUpdateReceivingVolumeCallbackInternalImplementation()   {
}
