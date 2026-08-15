#pragma once
// IWYU pragma private; include "Rewired/UpdateControllerInfoEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Rewired/zzzz__UpdateControllerInfoEventArgs_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputManagerJoystickPublic_def.hpp"
//  Writing Method size for method: ::Rewired::UpdateControllerInfoEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UpdateControllerInfoEventArgs::*)(::Rewired::Interfaces::IInputManagerJoystickPublic*)>(&::Rewired::UpdateControllerInfoEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UpdateControllerInfoEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Interfaces::IInputManagerJoystickPublic*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic*& Rewired::UpdateControllerInfoEventArgs::__cordl_internal_get_sourceJoystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceJoystick;
}
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* const& Rewired::UpdateControllerInfoEventArgs::__cordl_internal_get_sourceJoystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceJoystick;
}
constexpr void Rewired::UpdateControllerInfoEventArgs::__cordl_internal_set_sourceJoystick(::Rewired::Interfaces::IInputManagerJoystickPublic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceJoystick = value;
}
inline void Rewired::UpdateControllerInfoEventArgs::_ctor(::Rewired::Interfaces::IInputManagerJoystickPublic*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UpdateControllerInfoEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::Interfaces::IInputManagerJoystickPublic*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::UpdateControllerInfoEventArgs* Rewired::UpdateControllerInfoEventArgs::New_ctor(::Rewired::Interfaces::IInputManagerJoystickPublic*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::UpdateControllerInfoEventArgs*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::UpdateControllerInfoEventArgs::UpdateControllerInfoEventArgs()   {
}
