#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnLinkAccountCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLinkAccountCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LinkAccountCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnLinkAccountCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180527b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180527a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal* Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal* Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::LinkAccountCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnLinkAccountCallbackInternalImplementation::OnLinkAccountCallbackInternalImplementation()   {
}
