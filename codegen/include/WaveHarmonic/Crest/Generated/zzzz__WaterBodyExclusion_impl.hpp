#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Generated/WaterBodyExclusion.hpp"
#include "WaveHarmonic/Crest/Generated/zzzz__WaterBodyExclusion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Generated::WaterBodyExclusion::WaterBodyExclusion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Generated::WaterBodyExclusion::WaterBodyExclusion()   {
}
constexpr ::WaveHarmonic::Crest::Generated::WaterBodyExclusion  WaveHarmonic::Crest::Generated::WaterBodyExclusion::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Generated::WaterBodyExclusion  WaveHarmonic::Crest::Generated::WaterBodyExclusion::Include{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::Generated::WaterBodyExclusion  WaveHarmonic::Crest::Generated::WaterBodyExclusion::Exclude{static_cast<int32_t>(0x2)};
