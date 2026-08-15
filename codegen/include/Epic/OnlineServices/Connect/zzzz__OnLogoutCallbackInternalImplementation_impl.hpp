#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnLogoutCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLogoutCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LogoutCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLogoutCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnLogoutCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180528a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::LogoutCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805288a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LogoutCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnLogoutCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnLogoutCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnLogoutCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnLogoutCallbackInternal* Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnLogoutCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnLogoutCallbackInternal* Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnLogoutCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::LogoutCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LogoutCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnLogoutCallbackInternalImplementation::OnLogoutCallbackInternalImplementation()   {
}
