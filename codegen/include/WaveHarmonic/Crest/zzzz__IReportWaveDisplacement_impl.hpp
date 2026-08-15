#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IReportWaveDisplacement.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportWaveDisplacement_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::IReportWaveDisplacement.ReportWaveDisplacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::IReportWaveDisplacement::*)(::WaveHarmonic::Crest::WaterRenderer*, float_t)>(&::WaveHarmonic::Crest::IReportWaveDisplacement::ReportWaveDisplacement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::IReportWaveDisplacement*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::IReportWaveDisplacement*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t WaveHarmonic::Crest::IReportWaveDisplacement::ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::IReportWaveDisplacement*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, displacement);
}
