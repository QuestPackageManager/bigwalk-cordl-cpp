#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionLayer.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::CollisionLayer::CollisionLayer(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CollisionLayer::CollisionLayer()   {
}
constexpr ::WaveHarmonic::Crest::CollisionLayer  WaveHarmonic::Crest::CollisionLayer::Everything{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::CollisionLayer  WaveHarmonic::Crest::CollisionLayer::AfterAnimatedWaves{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::CollisionLayer  WaveHarmonic::Crest::CollisionLayer::AfterDynamicWaves{static_cast<int32_t>(0x2)};
