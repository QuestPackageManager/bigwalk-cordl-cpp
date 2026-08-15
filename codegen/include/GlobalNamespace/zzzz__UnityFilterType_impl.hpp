#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityFilterType.hpp"
#include "GlobalNamespace/zzzz__UnityFilterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UnityFilterType::UnityFilterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityFilterType::UnityFilterType()   {
}
constexpr ::GlobalNamespace::UnityFilterType  GlobalNamespace::UnityFilterType::LowPassFilter{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UnityFilterType  GlobalNamespace::UnityFilterType::HighPassFilter{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UnityFilterType  GlobalNamespace::UnityFilterType::EchoFilter{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::UnityFilterType  GlobalNamespace::UnityFilterType::ChorusFilter{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::UnityFilterType  GlobalNamespace::UnityFilterType::ReverbFilter{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::UnityFilterType  GlobalNamespace::UnityFilterType::DistortionFilter{static_cast<int32_t>(0x5)};
