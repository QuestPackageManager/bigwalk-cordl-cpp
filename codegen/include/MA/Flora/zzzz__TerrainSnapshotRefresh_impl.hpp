#pragma once
// IWYU pragma private; include "MA/Flora/TerrainSnapshotRefresh.hpp"
#include "MA/Flora/zzzz__TerrainSnapshotRefresh_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainSnapshotRefresh::TerrainSnapshotRefresh(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainSnapshotRefresh::TerrainSnapshotRefresh()   {
}
constexpr ::MA::Flora::TerrainSnapshotRefresh  MA::Flora::TerrainSnapshotRefresh::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::TerrainSnapshotRefresh  MA::Flora::TerrainSnapshotRefresh::DynamicData{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::TerrainSnapshotRefresh  MA::Flora::TerrainSnapshotRefresh::Prototypes{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::TerrainSnapshotRefresh  MA::Flora::TerrainSnapshotRefresh::All{static_cast<int32_t>(0x3)};
