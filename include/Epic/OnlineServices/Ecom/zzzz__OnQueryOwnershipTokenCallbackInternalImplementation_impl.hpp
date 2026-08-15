#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryOwnershipTokenCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipTokenCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipTokenCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipTokenCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal* (*)()>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051b7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipTokenCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnQueryOwnershipTokenCallbackInternalImplementation::OnQueryOwnershipTokenCallbackInternalImplementation()   {
}
