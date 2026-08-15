#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Setter.hpp"
#include "WaveHarmonic/Crest/zzzz__Setter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Setter::Setter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Setter::Setter()   {
}
constexpr ::WaveHarmonic::Crest::Setter  WaveHarmonic::Crest::Setter::Default{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Setter  WaveHarmonic::Crest::Setter::Custom{static_cast<int32_t>(0x1)};
constexpr ::WaveHarmonic::Crest::Setter  WaveHarmonic::Crest::Setter::Internal{static_cast<int32_t>(0x2)};
constexpr ::WaveHarmonic::Crest::Setter  WaveHarmonic::Crest::Setter::Dirty{static_cast<int32_t>(0x3)};
constexpr ::WaveHarmonic::Crest::Setter  WaveHarmonic::Crest::Setter::None{static_cast<int32_t>(0x4)};
