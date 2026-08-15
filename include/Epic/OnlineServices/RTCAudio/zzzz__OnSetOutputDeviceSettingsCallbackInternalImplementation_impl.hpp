#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnSetOutputDeviceSettingsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetOutputDeviceSettingsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetOutputDeviceSettingsCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnSetOutputDeviceSettingsCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ebb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ebad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal* Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal* Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnSetOutputDeviceSettingsCallbackInternalImplementation::OnSetOutputDeviceSettingsCallbackInternalImplementation()   {
}
