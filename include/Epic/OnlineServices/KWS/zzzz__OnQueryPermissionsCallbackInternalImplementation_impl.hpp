#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnQueryPermissionsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnQueryPermissionsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnQueryPermissionsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__QueryPermissionsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal* (*)()>(&::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051ba10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal>)>(&::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18051b9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal* Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal* Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::QueryPermissionsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnQueryPermissionsCallbackInternalImplementation::OnQueryPermissionsCallbackInternalImplementation()   {
}
