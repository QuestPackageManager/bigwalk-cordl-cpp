#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnLoginStatusChangedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLoginStatusChangedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginStatusChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLoginStatusChangedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal* (*)()>(&::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180528480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal* Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal* Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallbackInternalImplementation::OnLoginStatusChangedCallbackInternalImplementation()   {
}
