#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterCameraExclusion.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion::WaterCameraExclusion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion::WaterCameraExclusion()   {
}
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion  WaveHarmonic::Crest::WaterCameraExclusion::Nothing{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion  WaveHarmonic::Crest::WaterCameraExclusion::Hidden{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion  WaveHarmonic::Crest::WaterCameraExclusion::Reflection{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion  WaveHarmonic::Crest::WaterCameraExclusion::NonMainCamera{static_cast<int32_t>(0x8)};
constexpr ::WaveHarmonic::Crest::WaterCameraExclusion  WaveHarmonic::Crest::WaterCameraExclusion::Everything{static_cast<int32_t>(0xffffffff)};
