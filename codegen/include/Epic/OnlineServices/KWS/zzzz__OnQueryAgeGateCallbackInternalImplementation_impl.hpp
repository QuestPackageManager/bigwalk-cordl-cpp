#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnQueryAgeGateCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnQueryAgeGateCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnQueryAgeGateCallbackInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__QueryAgeGateCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal* (*)()>(&::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18051a260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>)>(&::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18051a200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal* Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal* Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::QueryAgeGateCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnQueryAgeGateCallbackInternalImplementation::OnQueryAgeGateCallbackInternalImplementation()   {
}
