#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OnQueryOwnershipBySandboxIdsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipBySandboxIdsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OnQueryOwnershipBySandboxIdsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__QueryOwnershipBySandboxIdsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal* (*)()>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051b340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>)>(&::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal* Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Ecom::QueryOwnershipBySandboxIdsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation::OnQueryOwnershipBySandboxIdsCallbackInternalImplementation()   {
}
