#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Layer.hpp"
#include "WaveHarmonic/Crest/zzzz__Decorator_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Layer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Layer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Layer::*)()>(&::WaveHarmonic::Crest::Layer::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Layer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Layer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Layer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Layer* WaveHarmonic::Crest::Layer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Layer*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Layer::Layer()   {
}
