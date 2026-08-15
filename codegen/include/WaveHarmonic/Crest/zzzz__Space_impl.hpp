#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Space.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Space_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Space._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Space::*)(float_t, bool)>(&::WaveHarmonic::Crest::Space::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Space*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Space::_ctor(float_t  height, bool  isAlwaysVisible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Space*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, height, isAlwaysVisible);
}
inline ::WaveHarmonic::Crest::Space* WaveHarmonic::Crest::Space::New_ctor(float_t  height, bool  isAlwaysVisible)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Space*>(height, isAlwaysVisible));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Space::Space()   {
}
