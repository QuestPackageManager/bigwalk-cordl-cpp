#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnShowBlockPlayerCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowBlockPlayerCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowBlockPlayerCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowBlockPlayerCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal* (*)()>(&::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804def40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInfoInternal>)>(&::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804deee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal* Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal* Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnShowBlockPlayerCallbackInternalImplementation::OnShowBlockPlayerCallbackInternalImplementation()   {
}
