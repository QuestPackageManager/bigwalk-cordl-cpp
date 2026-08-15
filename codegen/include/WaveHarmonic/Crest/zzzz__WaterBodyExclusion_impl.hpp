#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterBodyExclusion.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyExclusion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::WaterBodyExclusion::WaterBodyExclusion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterBodyExclusion::WaterBodyExclusion()   {
}
constexpr ::WaveHarmonic::Crest::WaterBodyExclusion  WaveHarmonic::Crest::WaterBodyExclusion::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::WaterBodyExclusion  WaveHarmonic::Crest::WaterBodyExclusion::Include{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::WaterBodyExclusion  WaveHarmonic::Crest::WaterBodyExclusion::Exclude{static_cast<int32_t>(0x2)};
