#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterReflectionSide.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterReflectionSide_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::WaterReflectionSide::WaterReflectionSide(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterReflectionSide::WaterReflectionSide()   {
}
constexpr ::WaveHarmonic::Crest::WaterReflectionSide  WaveHarmonic::Crest::WaterReflectionSide::Both{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::WaterReflectionSide  WaveHarmonic::Crest::WaterReflectionSide::Above{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::WaterReflectionSide  WaveHarmonic::Crest::WaterReflectionSide::Below{static_cast<int32_t>(0x2)};
