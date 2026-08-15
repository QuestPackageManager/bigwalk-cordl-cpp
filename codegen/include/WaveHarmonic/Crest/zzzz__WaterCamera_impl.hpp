#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterCamera.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCamera_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::WaterCamera._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::WaterCamera::*)()>(&::WaveHarmonic::Crest::WaterCamera::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256fed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterCamera*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::WaterCamera::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::WaterCamera*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::WaterCamera* WaveHarmonic::Crest::WaterCamera::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::WaterCamera*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterCamera::WaterCamera()   {
}
