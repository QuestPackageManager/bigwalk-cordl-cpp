#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnLogoutCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLogoutCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LogoutCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLogoutCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::OnLogoutCallbackInternal* (*)()>(&::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180528900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnLogoutCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnLogoutCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Auth::OnLogoutCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Auth::OnLogoutCallbackInternal* Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnLogoutCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Auth::OnLogoutCallbackInternal* Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::OnLogoutCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LogoutCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnLogoutCallbackInternalImplementation::OnLogoutCallbackInternalImplementation()   {
}
