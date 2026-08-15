#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryEntitlementsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryEntitlementsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryEntitlementsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryEntitlementsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal* (*)()>(&::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051a6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal* Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal* Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryEntitlementsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnQueryEntitlementsCallbackInternalImplementation::OnQueryEntitlementsCallbackInternalImplementation()   {
}
