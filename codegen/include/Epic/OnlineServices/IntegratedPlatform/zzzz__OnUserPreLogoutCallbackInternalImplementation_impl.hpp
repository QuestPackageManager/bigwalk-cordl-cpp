#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/OnUserPreLogoutCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__OnUserPreLogoutCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__IntegratedPlatformPreLogoutAction_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__OnUserPreLogoutCallbackInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__UserPreLogoutCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal* (*)()>(&::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051cd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction (*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>)>(&::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18051cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal* Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal* Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternal*>(nullptr, ___internal_method);
}
inline ::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::IntegratedPlatform::IntegratedPlatformPreLogoutAction>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::OnUserPreLogoutCallbackInternalImplementation::OnUserPreLogoutCallbackInternalImplementation()   {
}
