#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LodInputPrimitive.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputPrimitive_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::LodInputPrimitive::LodInputPrimitive(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LodInputPrimitive::LodInputPrimitive()   {
}
constexpr ::WaveHarmonic::Crest::LodInputPrimitive  WaveHarmonic::Crest::LodInputPrimitive::Sphere{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::LodInputPrimitive  WaveHarmonic::Crest::LodInputPrimitive::Cube{static_cast<int32_t>(0x3)};
constexpr ::WaveHarmonic::Crest::LodInputPrimitive  WaveHarmonic::Crest::LodInputPrimitive::Quad{static_cast<int32_t>(0x5)};
