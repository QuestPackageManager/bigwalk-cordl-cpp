#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioUpdateType.hpp"
#include "GlobalNamespace/zzzz__AudioUpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioUpdateType::AudioUpdateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioUpdateType::AudioUpdateType()   {
}
constexpr ::GlobalNamespace::AudioUpdateType  GlobalNamespace::AudioUpdateType::Update{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioUpdateType  GlobalNamespace::AudioUpdateType::FixedUpdate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioUpdateType  GlobalNamespace::AudioUpdateType::LateUpdate{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AudioUpdateType  GlobalNamespace::AudioUpdateType::SlowUpdate{static_cast<int32_t>(0x3)};
