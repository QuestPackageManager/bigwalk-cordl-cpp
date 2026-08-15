#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnQueryInputDevicesInformationCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnQueryInputDevicesInformationCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnQueryInputDevicesInformationCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnQueryInputDevicesInformationCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e9d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e9cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal* Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal* Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnQueryInputDevicesInformationCallbackInternalImplementation::OnQueryInputDevicesInformationCallbackInternalImplementation()   {
}
