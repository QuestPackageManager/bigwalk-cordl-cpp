#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnLoginStatusChangedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLoginStatusChangedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginStatusChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLoginStatusChangedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1805285a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805283c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal* Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal* Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LoginStatusChangedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnLoginStatusChangedCallbackInternalImplementation::OnLoginStatusChangedCallbackInternalImplementation()   {
}
