#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnDisplaySettingsUpdatedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnDisplaySettingsUpdatedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnDisplaySettingsUpdatedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnDisplaySettingsUpdatedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal* (*)()>(&::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804dcb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>)>(&::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804dcb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal* Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal* Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnDisplaySettingsUpdatedCallbackInternalImplementation::OnDisplaySettingsUpdatedCallbackInternalImplementation()   {
}
