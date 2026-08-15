#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnCheckoutCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnCheckoutCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__CheckoutCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnCheckoutCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal* (*)()>(&::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180519100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805190a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal* Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal* Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::CheckoutCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnCheckoutCallbackInternalImplementation::OnCheckoutCallbackInternalImplementation()   {
}
