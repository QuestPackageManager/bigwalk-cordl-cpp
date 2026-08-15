#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioFilterType.hpp"
#include "GlobalNamespace/zzzz__AudioFilterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioFilterType::AudioFilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioFilterType::AudioFilterType()   {
}
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::AllpassFilter{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::LowPassFilter{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::HighPassFilter{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::NotchFilter{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::LowShelfFilter{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::HighShelfFilter{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::PeakingEQFilter{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::TapeDelay{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::BitCrusher{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::LoudnessMeter{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::Send{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::Receive{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::BasicDelay{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::Downsampler{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::AudioFilterType  GlobalNamespace::AudioFilterType::Distortion{static_cast<int32_t>(0xe)};
