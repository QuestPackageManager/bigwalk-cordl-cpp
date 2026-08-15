#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnQueryIdTokenCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnQueryIdTokenCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnQueryIdTokenCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__QueryIdTokenCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal* (*)()>(&::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180529270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180529210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal* Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal* Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnQueryIdTokenCallbackInternalImplementation::OnQueryIdTokenCallbackInternalImplementation()   {
}
