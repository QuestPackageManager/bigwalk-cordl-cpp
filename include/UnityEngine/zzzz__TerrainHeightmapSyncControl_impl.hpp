#pragma once
// IWYU pragma private; include "UnityEngine/TerrainHeightmapSyncControl.hpp"
#include "UnityEngine/zzzz__TerrainHeightmapSyncControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainHeightmapSyncControl::TerrainHeightmapSyncControl(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainHeightmapSyncControl::TerrainHeightmapSyncControl()   {
}
constexpr ::UnityEngine::TerrainHeightmapSyncControl  UnityEngine::TerrainHeightmapSyncControl::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::TerrainHeightmapSyncControl  UnityEngine::TerrainHeightmapSyncControl::HeightOnly{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TerrainHeightmapSyncControl  UnityEngine::TerrainHeightmapSyncControl::HeightAndLod{static_cast<int32_t>(0x2)};
