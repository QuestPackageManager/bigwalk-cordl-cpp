#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/InlineToggle.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__InlineToggle_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::InlineToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::InlineToggle::*)(bool)>(&::WaveHarmonic::Crest::InlineToggle::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::InlineToggle*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::InlineToggle::_ctor(bool  fix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::InlineToggle*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fix);
}
inline ::WaveHarmonic::Crest::InlineToggle* WaveHarmonic::Crest::InlineToggle::New_ctor(bool  fix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::InlineToggle*>(fix));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::InlineToggle::InlineToggle()   {
}
