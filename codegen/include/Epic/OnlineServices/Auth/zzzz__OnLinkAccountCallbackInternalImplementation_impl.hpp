#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnLinkAccountCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLinkAccountCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnLinkAccountCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal* (*)()>(&::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180527c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>)>(&::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180527af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal* Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal* Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Auth::LinkAccountCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnLinkAccountCallbackInternalImplementation::OnLinkAccountCallbackInternalImplementation()   {
}
