#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodInputBlend.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputBlend_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::LodInputBlend::LodInputBlend(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodInputBlend::LodInputBlend()   {
}
constexpr ::WaveHarmonic::Crest::LodInputBlend  WaveHarmonic::Crest::LodInputBlend::Off{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::LodInputBlend  WaveHarmonic::Crest::LodInputBlend::Additive{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::LodInputBlend  WaveHarmonic::Crest::LodInputBlend::Minimum{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::LodInputBlend  WaveHarmonic::Crest::LodInputBlend::Maximum{static_cast<int32_t>(0x3)};
constexpr ::WaveHarmonic::Crest::LodInputBlend  WaveHarmonic::Crest::LodInputBlend::Alpha{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::LodInputBlend  WaveHarmonic::Crest::LodInputBlend::AlphaClip{static_cast<int32_t>(0x5)};
