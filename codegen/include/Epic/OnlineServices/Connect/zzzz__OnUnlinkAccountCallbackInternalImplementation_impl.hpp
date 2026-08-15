#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Connect/OnUnlinkAccountCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnUnlinkAccountCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__OnUnlinkAccountCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__UnlinkAccountCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal* (*)()>(&::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal>)>(&::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal* Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal* Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Connect::UnlinkAccountCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Connect::OnUnlinkAccountCallbackInternalImplementation::OnUnlinkAccountCallbackInternalImplementation()   {
}
