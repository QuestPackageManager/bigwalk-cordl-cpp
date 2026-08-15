#pragma once
// IWYU pragma private; include "MA/Flora/DebugSpatialHashFlags.hpp"
#include "MA/Flora/zzzz__DebugSpatialHashFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DebugSpatialHashFlags::DebugSpatialHashFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::DebugSpatialHashFlags::DebugSpatialHashFlags()   {
}
constexpr ::MA::Flora::DebugSpatialHashFlags  MA::Flora::DebugSpatialHashFlags::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::DebugSpatialHashFlags  MA::Flora::DebugSpatialHashFlags::Blocks{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::DebugSpatialHashFlags  MA::Flora::DebugSpatialHashFlags::Cells{static_cast<int32_t>(0x2)};
constexpr ::MA::Flora::DebugSpatialHashFlags  MA::Flora::DebugSpatialHashFlags::Chunks{static_cast<int32_t>(0x4)};
