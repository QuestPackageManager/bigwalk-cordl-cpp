#pragma once
// IWYU pragma private; include "UnityEngine/TerrainQualityOverrides.hpp"
#include "UnityEngine/zzzz__TerrainQualityOverrides_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainQualityOverrides::TerrainQualityOverrides(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainQualityOverrides::TerrainQualityOverrides()   {
}
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::PixelError{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::BasemapDistance{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::DetailDensity{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::DetailDistance{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::TreeDistance{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::BillboardStart{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::FadeLength{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::TerrainQualityOverrides  UnityEngine::TerrainQualityOverrides::MaxTrees{static_cast<int32_t>(0x80)};
