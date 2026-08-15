#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Minimum.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Minimum_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Minimum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Minimum::*)(float_t)>(&::WaveHarmonic::Crest::Minimum::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Minimum*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Minimum::_ctor(float_t  minimum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Minimum*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minimum);
}
inline ::WaveHarmonic::Crest::Minimum* WaveHarmonic::Crest::Minimum::New_ctor(float_t  minimum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Minimum*>(minimum));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Minimum::Minimum()   {
}
