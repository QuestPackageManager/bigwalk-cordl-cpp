#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Generated/CollisionSource.hpp"
#include "WaveHarmonic/Crest/Generated/zzzz__CollisionSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Generated::CollisionSource::CollisionSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Generated::CollisionSource::CollisionSource()   {
}
constexpr ::WaveHarmonic::Crest::Generated::CollisionSource  WaveHarmonic::Crest::Generated::CollisionSource::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Generated::CollisionSource  WaveHarmonic::Crest::Generated::CollisionSource::GPU{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::Generated::CollisionSource  WaveHarmonic::Crest::Generated::CollisionSource::CPU{static_cast<int32_t>(0x2)};
