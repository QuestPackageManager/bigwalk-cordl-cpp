#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthProbeRefreshMode.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthProbeRefreshMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode::DepthProbeRefreshMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode::DepthProbeRefreshMode()   {
}
constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode  WaveHarmonic::Crest::DepthProbeRefreshMode::OnStart{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode  WaveHarmonic::Crest::DepthProbeRefreshMode::EveryFrame{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::DepthProbeRefreshMode  WaveHarmonic::Crest::DepthProbeRefreshMode::ViaScripting{static_cast<int32_t>(0x2)};
