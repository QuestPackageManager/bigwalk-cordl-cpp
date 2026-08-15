#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnRedeemEntitlementsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnRedeemEntitlementsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnRedeemEntitlementsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__RedeemEntitlementsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal* (*)()>(&::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18051bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal* Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal* Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::RedeemEntitlementsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnRedeemEntitlementsCallbackInternalImplementation::OnRedeemEntitlementsCallbackInternalImplementation()   {
}
