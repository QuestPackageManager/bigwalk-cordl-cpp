#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnDisconnectedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnDisconnectedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__DisconnectedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnDisconnectedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal* (*)()>(&::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f8cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTC::DisconnectedCallbackInfoInternal>)>(&::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804f8c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::DisconnectedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal* Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal* Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTC::DisconnectedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::DisconnectedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnDisconnectedCallbackInternalImplementation::OnDisconnectedCallbackInternalImplementation()   {
}
