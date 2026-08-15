#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Group.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Group_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Group_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Group_Style::Group_Style(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Group_Style::Group_Style()   {
}
constexpr ::WaveHarmonic::Crest::Group_Style  WaveHarmonic::Crest::Group_Style::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Group_Style  WaveHarmonic::Crest::Group_Style::Foldout{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::Group_Style  WaveHarmonic::Crest::Group_Style::Accordian{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::WaveHarmonic::Crest::Group._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Group::*)(::StringW, ::WaveHarmonic::Crest::Group_Style, bool)>(&::WaveHarmonic::Crest::Group::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Group*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::Group_Style>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Group::_ctor(::StringW  title, ::WaveHarmonic::Crest::Group_Style  style, bool  isCustomFoldout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Group*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WaveHarmonic::Crest::Group_Style>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, style, isCustomFoldout);
}
inline ::WaveHarmonic::Crest::Group* WaveHarmonic::Crest::Group::New_ctor(::StringW  title, ::WaveHarmonic::Crest::Group_Style  style, bool  isCustomFoldout)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Group*>(title, style, isCustomFoldout));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Group::Group()   {
}
