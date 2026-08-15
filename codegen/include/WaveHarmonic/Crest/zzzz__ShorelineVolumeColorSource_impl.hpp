#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShorelineVolumeColorSource.hpp"
#include "WaveHarmonic/Crest/zzzz__ShorelineVolumeColorSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource::ShorelineVolumeColorSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource::ShorelineVolumeColorSource()   {
}
constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource  WaveHarmonic::Crest::ShorelineVolumeColorSource::None{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource  WaveHarmonic::Crest::ShorelineVolumeColorSource::Depth{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::ShorelineVolumeColorSource  WaveHarmonic::Crest::ShorelineVolumeColorSource::Distance{static_cast<int32_t>(0x2)};
