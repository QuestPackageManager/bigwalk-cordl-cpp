#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/SetDisplayPreferenceOptions.hpp"
#include "Epic/OnlineServices/UI/zzzz__NotificationLocation_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__SetDisplayPreferenceOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__NotificationLocation_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetDisplayPreferenceOptions.get_NotificationLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::NotificationLocation (::Epic::OnlineServices::UI::SetDisplayPreferenceOptions::*)()>(&::Epic::OnlineServices::UI::SetDisplayPreferenceOptions::get_NotificationLocation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>(),
                        {"get_NotificationLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::SetDisplayPreferenceOptions.set_NotificationLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::SetDisplayPreferenceOptions::*)(::Epic::OnlineServices::UI::NotificationLocation)>(&::Epic::OnlineServices::UI::SetDisplayPreferenceOptions::set_NotificationLocation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>(),
                        {"set_NotificationLocation", {}, {::i2c::type_of<::Epic::OnlineServices::UI::NotificationLocation>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::UI::NotificationLocation Epic::OnlineServices::UI::SetDisplayPreferenceOptions::get_NotificationLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>(),
                        {"get_NotificationLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::NotificationLocation>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::SetDisplayPreferenceOptions::set_NotificationLocation(::Epic::OnlineServices::UI::NotificationLocation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::SetDisplayPreferenceOptions>(),
                        {"set_NotificationLocation", {}, {::i2c::type_of<::Epic::OnlineServices::UI::NotificationLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_NotificationLocation_k__BackingField", ty: "::Epic::OnlineServices::UI::NotificationLocation", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::SetDisplayPreferenceOptions::SetDisplayPreferenceOptions(::Epic::OnlineServices::UI::NotificationLocation  _NotificationLocation_k__BackingField) noexcept  {
this->_NotificationLocation_k__BackingField = _NotificationLocation_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::SetDisplayPreferenceOptions::SetDisplayPreferenceOptions()   {
}
