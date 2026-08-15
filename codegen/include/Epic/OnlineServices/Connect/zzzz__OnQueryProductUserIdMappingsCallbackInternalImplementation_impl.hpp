#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnQueryProductUserIdMappingsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnQueryProductUserIdMappingsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnQueryProductUserIdMappingsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__QueryProductUserIdMappingsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805294b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180529450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal* Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal* Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::QueryProductUserIdMappingsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnQueryProductUserIdMappingsCallbackInternalImplementation::OnQueryProductUserIdMappingsCallbackInternalImplementation()   {
}
