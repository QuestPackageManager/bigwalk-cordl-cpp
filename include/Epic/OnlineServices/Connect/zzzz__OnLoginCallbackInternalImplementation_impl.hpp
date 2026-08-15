#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnLoginCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLoginCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLoginCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnLoginCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180528120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180527f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnLoginCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnLoginCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnLoginCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnLoginCallbackInternal* Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnLoginCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnLoginCallbackInternal* Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnLoginCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnLoginCallbackInternalImplementation::OnLoginCallbackInternalImplementation()   {
}
