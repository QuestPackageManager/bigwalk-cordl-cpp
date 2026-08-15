#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/OnCreateUserCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnCreateUserCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__CreateUserCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__OnCreateUserCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal* (*)()>(&::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180519350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal>)>(&::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805192e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal* Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal* Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::CreateUserCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::OnCreateUserCallbackInternalImplementation::OnCreateUserCallbackInternalImplementation()   {
}
