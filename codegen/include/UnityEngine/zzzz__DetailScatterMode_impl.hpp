#pragma once
// IWYU pragma private; include "UnityEngine/DetailScatterMode.hpp"
#include "UnityEngine/zzzz__DetailScatterMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DetailScatterMode::DetailScatterMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::DetailScatterMode::DetailScatterMode()   {
}
constexpr ::UnityEngine::DetailScatterMode  UnityEngine::DetailScatterMode::CoverageMode{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::DetailScatterMode  UnityEngine::DetailScatterMode::InstanceCountMode{static_cast<int32_t>(0x1)};
