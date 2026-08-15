#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnShowFriendsCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowFriendsCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowFriendsCallbackInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__ShowFriendsCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal* (*)()>(&::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804df180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UI::ShowFriendsCallbackInfoInternal>)>(&::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804df120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowFriendsCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal* Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal* Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UI::ShowFriendsCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::ShowFriendsCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnShowFriendsCallbackInternalImplementation::OnShowFriendsCallbackInternalImplementation()   {
}
