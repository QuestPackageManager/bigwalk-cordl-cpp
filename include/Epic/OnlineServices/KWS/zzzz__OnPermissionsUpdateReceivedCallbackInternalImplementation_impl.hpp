#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnPermissionsUpdateReceivedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnPermissionsUpdateReceivedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnPermissionsUpdateReceivedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__PermissionsUpdateReceivedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal* (*)()>(&::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051a020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>)>(&::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180519fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal* Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal* Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnPermissionsUpdateReceivedCallbackInternalImplementation::OnPermissionsUpdateReceivedCallbackInternalImplementation()   {
}
