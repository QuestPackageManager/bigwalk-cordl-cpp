#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodInputMode.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::LodInputMode::LodInputMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodInputMode::LodInputMode()   {
}
constexpr ::WaveHarmonic::Crest::LodInputMode  WaveHarmonic::Crest::LodInputMode::Unset{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::LodInputMode  WaveHarmonic::Crest::LodInputMode::Paint{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::LodInputMode  WaveHarmonic::Crest::LodInputMode::Spline{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::LodInputMode  WaveHarmonic::Crest::LodInputMode::Renderer{static_cast<int32_t>(0x3)};
constexpr ::WaveHarmonic::Crest::LodInputMode  WaveHarmonic::Crest::LodInputMode::Primitive{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::LodInputMode  WaveHarmonic::Crest::LodInputMode::Global{static_cast<int32_t>(0x5)};
constexpr ::WaveHarmonic::Crest::LodInputMode  WaveHarmonic::Crest::LodInputMode::Texture{static_cast<int32_t>(0x6)};
constexpr ::WaveHarmonic::Crest::LodInputMode  WaveHarmonic::Crest::LodInputMode::Geometry{static_cast<int32_t>(0x7)};
