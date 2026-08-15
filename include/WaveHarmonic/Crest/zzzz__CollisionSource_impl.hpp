#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/CollisionSource.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::CollisionSource::CollisionSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::CollisionSource::CollisionSource()   {
}
constexpr ::WaveHarmonic::Crest::CollisionSource  WaveHarmonic::Crest::CollisionSource::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::CollisionSource  WaveHarmonic::Crest::CollisionSource::GPU{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::CollisionSource  WaveHarmonic::Crest::CollisionSource::CPU{static_cast<int32_t>(0x3)};
