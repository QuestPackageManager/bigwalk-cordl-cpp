#pragma once
// IWYU pragma private; include "System/Diagnostics/BooleanSwitch.hpp"
#include "System/Diagnostics/zzzz__Switch_impl.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::BooleanSwitch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::BooleanSwitch::*)(::StringW, ::StringW)>(&::System::Diagnostics::BooleanSwitch::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181dd7090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::BooleanSwitch*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Diagnostics::BooleanSwitch::_ctor(::StringW  displayName, ::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Diagnostics::BooleanSwitch*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName, description);
}
inline ::System::Diagnostics::BooleanSwitch* System::Diagnostics::BooleanSwitch::New_ctor(::StringW  displayName, ::StringW  description)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::BooleanSwitch*>(displayName, description));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::BooleanSwitch::BooleanSwitch()   {
}
