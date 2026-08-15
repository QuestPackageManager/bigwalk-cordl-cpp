#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnQueryOutputDevicesInformationCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnQueryOutputDevicesInformationCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnQueryOutputDevicesInformationCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnQueryOutputDevicesInformationCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ea1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ea150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal* Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal* Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnQueryOutputDevicesInformationCallbackInternalImplementation::OnQueryOutputDevicesInformationCallbackInternalImplementation()   {
}
