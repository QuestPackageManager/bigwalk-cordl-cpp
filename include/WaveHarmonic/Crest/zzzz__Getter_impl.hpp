#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Getter.hpp"
#include "WaveHarmonic/Crest/zzzz__Getter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::WaveHarmonic::Crest::Getter::Getter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Getter::Getter()   {
}
constexpr ::WaveHarmonic::Crest::Getter  WaveHarmonic::Crest::Getter::Default{static_cast<int32_t>(0x0)};
constexpr ::WaveHarmonic::Crest::Getter  WaveHarmonic::Crest::Getter::Custom{static_cast<int32_t>(0x1)};
