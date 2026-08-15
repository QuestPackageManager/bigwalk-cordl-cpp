#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/DirectInput/DirectInputInputRange.hpp"
#include "Rewired/Platforms/Windows/DirectInput/zzzz__DirectInputInputRange_def.hpp"
//  Writing Method size for method: ::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange::*)(int32_t, int32_t)>(&::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804a47e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Platforms::Windows::DirectInput::DirectInputInputRange::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
// Ctor Parameters [CppParam { name: "Minimum", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Maximum", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange::DirectInputInputRange(int32_t  Minimum, int32_t  Maximum) noexcept  {
this->Minimum = Minimum;
this->Maximum = Maximum;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::Windows::DirectInput::DirectInputInputRange::DirectInputInputRange()   {
}
