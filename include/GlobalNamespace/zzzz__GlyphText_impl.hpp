#pragma once
// IWYU pragma private; include "GlobalNamespace/GlyphText.hpp"
#include "GlobalNamespace/zzzz__GlyphText_def.hpp"
#include "GlobalNamespace/zzzz__GlyphText_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GlyphText_FontType::GlyphText_FontType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlyphText_FontType::GlyphText_FontType()   {
}
constexpr ::GlobalNamespace::GlyphText_FontType  GlobalNamespace::GlyphText_FontType::GlyphFont{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GlyphText_FontType  GlobalNamespace::GlyphText_FontType::FallbackFont{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::GlyphText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GlyphText::*)(::StringW, ::GlobalNamespace::GlyphText_FontType)>(&::GlobalNamespace::GlyphText::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802f17c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphText>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GlyphText_FontType>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GlyphText::_ctor(::StringW  glyphString, ::GlobalNamespace::GlyphText_FontType  fontType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GlyphText>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GlyphText_FontType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, glyphString, fontType);
}
// Ctor Parameters [CppParam { name: "glyphString", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontType", ty: "::GlobalNamespace::GlyphText_FontType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GlyphText::GlyphText(::StringW  glyphString, ::GlobalNamespace::GlyphText_FontType  fontType) noexcept  {
this->glyphString = glyphString;
this->fontType = fontType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlyphText::GlyphText()   {
}
