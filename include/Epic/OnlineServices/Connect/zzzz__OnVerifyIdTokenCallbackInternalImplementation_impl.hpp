#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnVerifyIdTokenCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnVerifyIdTokenCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnVerifyIdTokenCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__VerifyIdTokenCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052acc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18052ab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal* Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal* Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::VerifyIdTokenCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnVerifyIdTokenCallbackInternalImplementation::OnVerifyIdTokenCallbackInternalImplementation()   {
}
