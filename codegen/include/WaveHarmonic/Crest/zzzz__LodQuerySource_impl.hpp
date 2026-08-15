#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodQuerySource.hpp"
#include "WaveHarmonic/Crest/zzzz__LodQuerySource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::LodQuerySource::LodQuerySource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodQuerySource::LodQuerySource()   {
}
constexpr ::WaveHarmonic::Crest::LodQuerySource  WaveHarmonic::Crest::LodQuerySource::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::LodQuerySource  WaveHarmonic::Crest::LodQuerySource::GPU{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::LodQuerySource  WaveHarmonic::Crest::LodQuerySource::CPU{static_cast<int32_t>(0x2)};
