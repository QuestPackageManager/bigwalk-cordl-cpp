#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnAuthExpirationCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnAuthExpirationCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__AuthExpirationCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnAuthExpirationCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805268f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180526890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal* Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal* Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnAuthExpirationCallbackInternalImplementation::OnAuthExpirationCallbackInternalImplementation()   {
}
