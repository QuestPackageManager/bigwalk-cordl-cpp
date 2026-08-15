#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnCreateUserCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnCreateUserCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__CreateUserCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnCreateUserCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180527430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805273d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal* Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal* Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::CreateUserCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnCreateUserCallbackInternalImplementation::OnCreateUserCallbackInternalImplementation()   {
}
