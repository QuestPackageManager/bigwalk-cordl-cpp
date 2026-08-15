#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnHideFriendsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnHideFriendsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__HideFriendsCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnHideFriendsCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal* (*)()>(&::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804dcfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal>)>(&::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804dcf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal* Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal* Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::HideFriendsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnHideFriendsCallbackInternalImplementation::OnHideFriendsCallbackInternalImplementation()   {
}
