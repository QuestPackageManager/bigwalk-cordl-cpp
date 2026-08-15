#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioImpactType.hpp"
#include "GlobalNamespace/zzzz__AudioImpactType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioImpactType::AudioImpactType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioImpactType::AudioImpactType()   {
}
constexpr ::GlobalNamespace::AudioImpactType  GlobalNamespace::AudioImpactType::Hard{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioImpactType  GlobalNamespace::AudioImpactType::Soft{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioImpactType  GlobalNamespace::AudioImpactType::Silent{static_cast<int32_t>(0x2)};
