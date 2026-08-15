#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/AecmRoutingMode.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecmRoutingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode::AecmRoutingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode::AecmRoutingMode()   {
}
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode  Dissonance::Audio::Capture::AecmRoutingMode::Disabled{static_cast<int32_t>(0xffffffff)};
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode  Dissonance::Audio::Capture::AecmRoutingMode::QuietEarpieceOrHeadset{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode  Dissonance::Audio::Capture::AecmRoutingMode::Earpiece{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode  Dissonance::Audio::Capture::AecmRoutingMode::LoudEarpiece{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode  Dissonance::Audio::Capture::AecmRoutingMode::Speakerphone{static_cast<int32_t>(0x3)};
constexpr ::Dissonance::Audio::Capture::AecmRoutingMode  Dissonance::Audio::Capture::AecmRoutingMode::LoudSpeakerphone{static_cast<int32_t>(0x4)};
