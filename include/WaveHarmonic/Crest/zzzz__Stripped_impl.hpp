#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Stripped.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Stripped_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Stripped_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Stripped_Style::Stripped_Style(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Stripped_Style::Stripped_Style()   {
}
constexpr ::WaveHarmonic::Crest::Stripped_Style  WaveHarmonic::Crest::Stripped_Style::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Stripped_Style  WaveHarmonic::Crest::Stripped_Style::PlatformTab{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::WaveHarmonic::Crest::Stripped._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Stripped::*)(::WaveHarmonic::Crest::Stripped_Style, bool)>(&::WaveHarmonic::Crest::Stripped::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Stripped*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::Stripped_Style>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Stripped::_ctor(::WaveHarmonic::Crest::Stripped_Style  style, bool  indent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Stripped*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::Stripped_Style>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, style, indent);
}
inline ::WaveHarmonic::Crest::Stripped* WaveHarmonic::Crest::Stripped::New_ctor(::WaveHarmonic::Crest::Stripped_Style  style, bool  indent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Stripped*>(style, indent));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Stripped::Stripped()   {
}
