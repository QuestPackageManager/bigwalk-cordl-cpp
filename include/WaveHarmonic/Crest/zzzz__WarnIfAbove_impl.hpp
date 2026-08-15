#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WarnIfAbove.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WarnIfAbove_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::WarnIfAbove._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WarnIfAbove::*)(float_t)>(&::WaveHarmonic::Crest::WarnIfAbove::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WarnIfAbove*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::WarnIfAbove::_ctor(float_t  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WarnIfAbove*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maximum);
}
inline ::WaveHarmonic::Crest::WarnIfAbove* WaveHarmonic::Crest::WarnIfAbove::New_ctor(float_t  maximum)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WarnIfAbove*>(maximum));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WarnIfAbove::WarnIfAbove()   {
}
