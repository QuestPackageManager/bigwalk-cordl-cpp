#pragma once
// IWYU pragma private; include "Rewired/Platforms/Custom/CustomPlatformConfigVars.hpp"
#include "Rewired/Data/zzzz__ConfigVars_impl.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomPlatformConfigVars_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Custom::CustomPlatformConfigVars._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Custom::CustomPlatformConfigVars::*)()>(&::Rewired::Platforms::Custom::CustomPlatformConfigVars::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18187ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformConfigVars*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Platforms::Custom::CustomPlatformConfigVars::__cordl_internal_get_useNativeKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNativeKeyboard;
}
constexpr bool const& Rewired::Platforms::Custom::CustomPlatformConfigVars::__cordl_internal_get_useNativeKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNativeKeyboard;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformConfigVars::__cordl_internal_set_useNativeKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useNativeKeyboard = value;
}
constexpr bool& Rewired::Platforms::Custom::CustomPlatformConfigVars::__cordl_internal_get_useNativeMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNativeMouse;
}
constexpr bool const& Rewired::Platforms::Custom::CustomPlatformConfigVars::__cordl_internal_get_useNativeMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNativeMouse;
}
constexpr void Rewired::Platforms::Custom::CustomPlatformConfigVars::__cordl_internal_set_useNativeMouse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useNativeMouse = value;
}
inline void Rewired::Platforms::Custom::CustomPlatformConfigVars::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Custom::CustomPlatformConfigVars*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Platforms::Custom::CustomPlatformConfigVars* Rewired::Platforms::Custom::CustomPlatformConfigVars::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Platforms::Custom::CustomPlatformConfigVars*>());
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Custom::CustomPlatformConfigVars::CustomPlatformConfigVars()   {
}
