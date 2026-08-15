#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryOwnershipCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal* (*)()>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051b580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051b520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnQueryOwnershipCallbackInternalImplementation::OnQueryOwnershipCallbackInternalImplementation()   {
}
