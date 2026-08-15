#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthProbeMode.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::DepthProbeMode::DepthProbeMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthProbeMode::DepthProbeMode()   {
}
constexpr ::WaveHarmonic::Crest::DepthProbeMode  WaveHarmonic::Crest::DepthProbeMode::RealTime{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::DepthProbeMode  WaveHarmonic::Crest::DepthProbeMode::Baked{static_cast<int32_t>(0x1)};
