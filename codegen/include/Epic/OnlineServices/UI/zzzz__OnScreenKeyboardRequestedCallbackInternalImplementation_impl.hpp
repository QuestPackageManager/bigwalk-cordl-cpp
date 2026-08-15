#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardRequestedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardRequestedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal* (*)()>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804dec00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal>)>(&::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804deba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal* Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnScreenKeyboardRequestedCallbackInternalImplementation::OnScreenKeyboardRequestedCallbackInternalImplementation()   {
}
