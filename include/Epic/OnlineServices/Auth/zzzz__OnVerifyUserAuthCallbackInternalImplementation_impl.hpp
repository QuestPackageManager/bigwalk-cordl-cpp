#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnVerifyUserAuthCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnVerifyUserAuthCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnVerifyUserAuthCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyUserAuthCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal* (*)()>(&::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052afc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052af60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal* Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal* Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnVerifyUserAuthCallbackInternalImplementation::OnVerifyUserAuthCallbackInternalImplementation()   {
}
