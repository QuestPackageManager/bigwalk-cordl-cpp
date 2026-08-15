#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnRequestPermissionsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnRequestPermissionsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnRequestPermissionsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__RequestPermissionsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal* (*)()>(&::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051c320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfoInternal>)>(&::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051c2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal* Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal* Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::RequestPermissionsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnRequestPermissionsCallbackInternalImplementation::OnRequestPermissionsCallbackInternalImplementation()   {
}
