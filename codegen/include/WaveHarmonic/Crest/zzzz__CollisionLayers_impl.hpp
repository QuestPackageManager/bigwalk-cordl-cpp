#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionLayers.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::CollisionLayers::CollisionLayers(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CollisionLayers::CollisionLayers()   {
}
constexpr ::WaveHarmonic::Crest::CollisionLayers  WaveHarmonic::Crest::CollisionLayers::Nothing{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::CollisionLayers  WaveHarmonic::Crest::CollisionLayers::DynamicWaves{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::CollisionLayers  WaveHarmonic::Crest::CollisionLayers::Displacement{static_cast<int32_t>(0x4)};
constexpr ::WaveHarmonic::Crest::CollisionLayers  WaveHarmonic::Crest::CollisionLayers::Everything{static_cast<int32_t>(0xffffffff)};
