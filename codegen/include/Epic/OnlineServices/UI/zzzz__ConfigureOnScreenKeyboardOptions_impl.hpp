#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/ConfigureOnScreenKeyboardOptions.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardBehavior_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__ConfigureOnScreenKeyboardOptions_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnScreenKeyboardBehavior_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions.get_Behavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnScreenKeyboardBehavior (::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::*)()>(&::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::get_Behavior)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>(),
                        {"get_Behavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions.set_Behavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::*)(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior)>(&::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::set_Behavior)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>(),
                        {"set_Behavior", {}, {::i2c::type_of<::Epic::OnlineServices::UI::OnScreenKeyboardBehavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions.get_IsDeviceChecksEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::*)()>(&::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::get_IsDeviceChecksEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>(),
                        {"get_IsDeviceChecksEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions.set_IsDeviceChecksEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::*)(bool)>(&::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::set_IsDeviceChecksEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>(),
                        {"set_IsDeviceChecksEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::get_Behavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>(),
                        {"get_Behavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnScreenKeyboardBehavior>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::set_Behavior(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>(),
                        {"set_Behavior", {}, {::i2c::type_of<::Epic::OnlineServices::UI::OnScreenKeyboardBehavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::get_IsDeviceChecksEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>(),
                        {"get_IsDeviceChecksEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::set_IsDeviceChecksEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions>(),
                        {"set_IsDeviceChecksEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_Behavior_k__BackingField", ty: "::Epic::OnlineServices::UI::OnScreenKeyboardBehavior", modifiers: "", def_value: Some("{}") }, CppParam { name: "_IsDeviceChecksEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::ConfigureOnScreenKeyboardOptions(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior  _Behavior_k__BackingField, bool  _IsDeviceChecksEnabled_k__BackingField) noexcept  {
this->_Behavior_k__BackingField = _Behavior_k__BackingField;
this->_IsDeviceChecksEnabled_k__BackingField = _IsDeviceChecksEnabled_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::ConfigureOnScreenKeyboardOptions::ConfigureOnScreenKeyboardOptions()   {
}
