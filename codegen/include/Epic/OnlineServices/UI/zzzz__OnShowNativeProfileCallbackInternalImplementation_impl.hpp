#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnShowNativeProfileCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowNativeProfileCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowNativeProfileCallbackInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ShowNativeProfileCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal* (*)()>(&::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804df3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileCallbackInfoInternal>)>(&::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804df360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal* Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal* Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowNativeProfileCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnShowNativeProfileCallbackInternalImplementation::OnShowNativeProfileCallbackInternalImplementation()   {
}
