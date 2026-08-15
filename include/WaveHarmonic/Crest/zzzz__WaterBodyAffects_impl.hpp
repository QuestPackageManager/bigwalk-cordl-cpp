#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterBodyAffects.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterBodyAffects_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::WaterBodyAffects::WaterBodyAffects(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::WaterBodyAffects::WaterBodyAffects()   {
}
constexpr ::WaveHarmonic::Crest::WaterBodyAffects  WaveHarmonic::Crest::WaterBodyAffects::Nothing{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::WaterBodyAffects  WaveHarmonic::Crest::WaterBodyAffects::Surface{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::WaterBodyAffects  WaveHarmonic::Crest::WaterBodyAffects::Volume{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::WaterBodyAffects  WaveHarmonic::Crest::WaterBodyAffects::Physics{static_cast<int32_t>(0x8)};
constexpr ::WaveHarmonic::Crest::WaterBodyAffects  WaveHarmonic::Crest::WaterBodyAffects::Everything{static_cast<int32_t>(0xffffffff)};
