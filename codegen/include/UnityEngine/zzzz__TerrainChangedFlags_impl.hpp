#pragma once
// IWYU pragma private; include "UnityEngine/TerrainChangedFlags.hpp"
#include "UnityEngine/zzzz__TerrainChangedFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TerrainChangedFlags::TerrainChangedFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainChangedFlags::TerrainChangedFlags()   {
}
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::Heightmap{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::TreeInstances{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::DelayedHeightmapUpdate{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::FlushEverythingImmediately{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::RemoveDirtyDetailsImmediately{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::HeightmapResolution{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::Holes{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::DelayedHolesUpdate{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::TerrainChangedFlags  UnityEngine::TerrainChangedFlags::WillBeDestroyed{static_cast<int32_t>(0x100)};
