#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnLoginCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLoginCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLoginCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::OnLoginCallbackInternal* (*)()>(&::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180528000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180527f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnLoginCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnLoginCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Auth::OnLoginCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Auth::OnLoginCallbackInternal* Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnLoginCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Auth::OnLoginCallbackInternal* Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::OnLoginCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LoginCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnLoginCallbackInternalImplementation::OnLoginCallbackInternalImplementation()   {
}
