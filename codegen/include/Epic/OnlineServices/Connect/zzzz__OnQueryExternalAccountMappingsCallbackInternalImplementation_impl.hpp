#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnQueryExternalAccountMappingsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnQueryExternalAccountMappingsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnQueryExternalAccountMappingsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryExternalAccountMappingsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180529030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180528fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal* Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal* Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryExternalAccountMappingsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnQueryExternalAccountMappingsCallbackInternalImplementation::OnQueryExternalAccountMappingsCallbackInternalImplementation()   {
}
