#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DisplacementPass.hpp"
#include "WaveHarmonic/Crest/zzzz__DisplacementPass_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::DisplacementPass::DisplacementPass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DisplacementPass::DisplacementPass()   {
}
constexpr ::WaveHarmonic::Crest::DisplacementPass  WaveHarmonic::Crest::DisplacementPass::LodDependent{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::DisplacementPass  WaveHarmonic::Crest::DisplacementPass::LodIndependent{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::DisplacementPass  WaveHarmonic::Crest::DisplacementPass::LodIndependentLast{static_cast<int32_t>(0x2)};
