#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodTextureFormatMode.hpp"
#include "WaveHarmonic/Crest/zzzz__LodTextureFormatMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::LodTextureFormatMode::LodTextureFormatMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodTextureFormatMode::LodTextureFormatMode()   {
}
constexpr ::WaveHarmonic::Crest::LodTextureFormatMode  WaveHarmonic::Crest::LodTextureFormatMode::Manual{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::LodTextureFormatMode  WaveHarmonic::Crest::LodTextureFormatMode::Performance{static_cast<int32_t>(0x64)};
constexpr ::WaveHarmonic::Crest::LodTextureFormatMode  WaveHarmonic::Crest::LodTextureFormatMode::Precision{static_cast<int32_t>(0xc8)};
constexpr ::WaveHarmonic::Crest::LodTextureFormatMode  WaveHarmonic::Crest::LodTextureFormatMode::Automatic{static_cast<int32_t>(0x12c)};
