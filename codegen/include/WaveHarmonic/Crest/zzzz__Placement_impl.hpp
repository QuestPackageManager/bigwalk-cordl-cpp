#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Placement.hpp"
#include "WaveHarmonic/Crest/zzzz__Placement_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Placement::Placement(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Placement::Placement()   {
}
constexpr ::WaveHarmonic::Crest::Placement  WaveHarmonic::Crest::Placement::Fixed{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Placement  WaveHarmonic::Crest::Placement::Transform{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::Placement  WaveHarmonic::Crest::Placement::Viewpoint{static_cast<int32_t>(0x2)};
