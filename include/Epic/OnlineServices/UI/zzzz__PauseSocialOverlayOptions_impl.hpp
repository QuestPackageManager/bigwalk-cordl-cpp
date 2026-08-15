#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/PauseSocialOverlayOptions.hpp"
#include "Epic/OnlineServices/UI/zzzz__PauseSocialOverlayOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::PauseSocialOverlayOptions.get_IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::UI::PauseSocialOverlayOptions::*)()>(&::Epic::OnlineServices::UI::PauseSocialOverlayOptions::get_IsPaused)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>(),
                        {"get_IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::PauseSocialOverlayOptions.set_IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UI::PauseSocialOverlayOptions::*)(bool)>(&::Epic::OnlineServices::UI::PauseSocialOverlayOptions::set_IsPaused)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>(),
                        {"set_IsPaused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Epic::OnlineServices::UI::PauseSocialOverlayOptions::get_IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>(),
                        {"get_IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UI::PauseSocialOverlayOptions::set_IsPaused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::PauseSocialOverlayOptions>(),
                        {"set_IsPaused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_IsPaused_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::PauseSocialOverlayOptions::PauseSocialOverlayOptions(bool  _IsPaused_k__BackingField) noexcept  {
this->_IsPaused_k__BackingField = _IsPaused_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::PauseSocialOverlayOptions::PauseSocialOverlayOptions()   {
}
