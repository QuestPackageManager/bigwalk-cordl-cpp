#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterDataBackgroundMode.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterDataBackgroundMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode::WaterDataBackgroundMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode::WaterDataBackgroundMode()   {
}
constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode  WaveHarmonic::Crest::WaterDataBackgroundMode::Always{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode  WaveHarmonic::Crest::WaterDataBackgroundMode::Inactive{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode  WaveHarmonic::Crest::WaterDataBackgroundMode::Disabled{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::WaterDataBackgroundMode  WaveHarmonic::Crest::WaterDataBackgroundMode::Never{static_cast<int32_t>(0x3)};
