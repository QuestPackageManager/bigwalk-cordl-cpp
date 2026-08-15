#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnVerifyIdTokenCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnVerifyIdTokenCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnVerifyIdTokenCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__VerifyIdTokenCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal* (*)()>(&::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18052aaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal* Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal* Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::VerifyIdTokenCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnVerifyIdTokenCallbackInternalImplementation::OnVerifyIdTokenCallbackInternalImplementation()   {
}
