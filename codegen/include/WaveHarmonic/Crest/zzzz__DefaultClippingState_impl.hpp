#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DefaultClippingState.hpp"
#include "WaveHarmonic/Crest/zzzz__DefaultClippingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::DefaultClippingState::DefaultClippingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DefaultClippingState::DefaultClippingState()   {
}
constexpr ::WaveHarmonic::Crest::DefaultClippingState  WaveHarmonic::Crest::DefaultClippingState::NothingClipped{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::DefaultClippingState  WaveHarmonic::Crest::DefaultClippingState::EverythingClipped{static_cast<int32_t>(0x1)};
