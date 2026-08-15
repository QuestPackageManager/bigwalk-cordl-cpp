#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnRegisterPlatformUserCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnRegisterPlatformUserCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnRegisterPlatformUserCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnRegisterPlatformUserCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ea420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ea3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal* Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal* Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnRegisterPlatformUserCallbackInternalImplementation::OnRegisterPlatformUserCallbackInternalImplementation()   {
}
