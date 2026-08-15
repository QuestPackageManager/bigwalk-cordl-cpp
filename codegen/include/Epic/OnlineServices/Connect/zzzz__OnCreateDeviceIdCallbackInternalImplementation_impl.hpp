#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnCreateDeviceIdCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnCreateDeviceIdCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateDeviceIdCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnCreateDeviceIdCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805271f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180527190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal* Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal* Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateDeviceIdCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnCreateDeviceIdCallbackInternalImplementation::OnCreateDeviceIdCallbackInternalImplementation()   {
}
