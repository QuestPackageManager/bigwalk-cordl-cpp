#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnDeleteDeviceIdCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnDeleteDeviceIdCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__DeleteDeviceIdCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnDeleteDeviceIdCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180527670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180527610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal* Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal* Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::DeleteDeviceIdCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnDeleteDeviceIdCallbackInternalImplementation::OnDeleteDeviceIdCallbackInternalImplementation()   {
}
