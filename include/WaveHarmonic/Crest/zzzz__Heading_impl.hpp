#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Heading.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Heading_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Heading_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Heading_Style::Heading_Style(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Heading_Style::Heading_Style()   {
}
constexpr ::WaveHarmonic::Crest::Heading_Style  WaveHarmonic::Crest::Heading_Style::Normal{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Heading_Style  WaveHarmonic::Crest::Heading_Style::Settings{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::WaveHarmonic::Crest::Heading._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Heading::*)(::StringW, ::WaveHarmonic::Crest::Heading_Style, bool, bool, ::StringW)>(&::WaveHarmonic::Crest::Heading::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Heading*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::Heading_Style>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Heading::_ctor(::StringW  heading, ::WaveHarmonic::Crest::Heading_Style  style, bool  alwaysVisible, bool  alwaysEnabled, ::StringW  helpLink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Heading*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::Heading_Style>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, heading, style, alwaysVisible, alwaysEnabled, helpLink);
}
inline ::WaveHarmonic::Crest::Heading* WaveHarmonic::Crest::Heading::New_ctor(::StringW  heading, ::WaveHarmonic::Crest::Heading_Style  style, bool  alwaysVisible, bool  alwaysEnabled, ::StringW  helpLink)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Heading*>(heading, style, alwaysVisible, alwaysEnabled, helpLink));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Heading::Heading()   {
}
