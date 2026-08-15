#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaveSampling.hpp"
#include "WaveHarmonic/Crest/zzzz__WaveSampling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::WaveSampling::WaveSampling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaveSampling::WaveSampling()   {
}
constexpr ::WaveHarmonic::Crest::WaveSampling  WaveHarmonic::Crest::WaveSampling::Automatic{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::WaveSampling  WaveHarmonic::Crest::WaveSampling::Performance{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::WaveSampling  WaveHarmonic::Crest::WaveSampling::Precision{static_cast<int32_t>(0x2)};
