#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Maximum.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Maximum_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Maximum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Maximum::*)(float_t)>(&::WaveHarmonic::Crest::Maximum::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Maximum*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Maximum::_ctor(float_t  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Maximum*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maximum);
}
inline ::WaveHarmonic::Crest::Maximum* WaveHarmonic::Crest::Maximum::New_ctor(float_t  maximum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Maximum*>(maximum));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Maximum::Maximum()   {
}
