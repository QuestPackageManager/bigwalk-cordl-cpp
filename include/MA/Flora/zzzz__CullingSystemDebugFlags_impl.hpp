#pragma once
// IWYU pragma private; include "MA/Flora/CullingSystemDebugFlags.hpp"
#include "MA/Flora/zzzz__CullingSystemDebugFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::CullingSystemDebugFlags::CullingSystemDebugFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::CullingSystemDebugFlags::CullingSystemDebugFlags()   {
}
constexpr ::MA::Flora::CullingSystemDebugFlags  MA::Flora::CullingSystemDebugFlags::None{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::CullingSystemDebugFlags  MA::Flora::CullingSystemDebugFlags::CPUCullingStats{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::CullingSystemDebugFlags  MA::Flora::CullingSystemDebugFlags::GPUCullingStats{static_cast<int32_t>(0x2)};
