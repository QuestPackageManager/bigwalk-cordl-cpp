#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnTransferDeviceIdAccountCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnTransferDeviceIdAccountCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnTransferDeviceIdAccountCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__TransferDeviceIdAccountCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052a620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal* Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal* Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::TransferDeviceIdAccountCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnTransferDeviceIdAccountCallbackInternalImplementation::OnTransferDeviceIdAccountCallbackInternalImplementation()   {
}
