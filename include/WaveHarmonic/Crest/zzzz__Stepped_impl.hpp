#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Stepped.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Stepped_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Stepped._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Stepped::*)(int32_t, int32_t, int32_t, bool)>(&::WaveHarmonic::Crest::Stepped::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Stepped*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Stepped::_ctor(int32_t  minimum, int32_t  maximum, int32_t  step, bool  power)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Stepped*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minimum, maximum, step, power);
}
inline ::WaveHarmonic::Crest::Stepped* WaveHarmonic::Crest::Stepped::New_ctor(int32_t  minimum, int32_t  maximum, int32_t  step, bool  power)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Stepped*>(minimum, maximum, step, power));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Stepped::Stepped()   {
}
