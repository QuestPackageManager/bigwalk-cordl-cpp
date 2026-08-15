#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUnregisterPlatformUserCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUnregisterPlatformUserCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUnregisterPlatformUserCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUnregisterPlatformUserCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ebfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ebf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal* Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal* Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnUnregisterPlatformUserCallbackInternalImplementation::OnUnregisterPlatformUserCallbackInternalImplementation()   {
}
