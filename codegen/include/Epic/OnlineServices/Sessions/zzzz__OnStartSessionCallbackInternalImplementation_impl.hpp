#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnStartSessionCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnStartSessionCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnStartSessionCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__StartSessionCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal* (*)()>(&::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ebd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Sessions::StartSessionCallbackInfoInternal>)>(&::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ebd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::StartSessionCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal* Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal* Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Sessions::StartSessionCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::StartSessionCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnStartSessionCallbackInternalImplementation::OnStartSessionCallbackInternalImplementation()   {
}
