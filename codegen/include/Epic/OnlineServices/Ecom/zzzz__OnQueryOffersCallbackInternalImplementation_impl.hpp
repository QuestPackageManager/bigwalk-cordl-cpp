#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryOffersCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOffersCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOffersCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOffersCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal* (*)()>(&::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051b100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOffersCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOffersCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::QueryOffersCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOffersCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnQueryOffersCallbackInternalImplementation::OnQueryOffersCallbackInternalImplementation()   {
}
