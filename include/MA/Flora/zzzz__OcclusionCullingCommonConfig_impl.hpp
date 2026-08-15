#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionCullingCommonConfig.hpp"
#include "MA/Flora/zzzz__OcclusionCullingCommonConfig_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::OcclusionCullingCommonConfig::OcclusionCullingCommonConfig(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::OcclusionCullingCommonConfig::OcclusionCullingCommonConfig()   {
}
constexpr ::MA::Flora::OcclusionCullingCommonConfig  MA::Flora::OcclusionCullingCommonConfig::MaxOccluderMips{static_cast<int32_t>(0x8)};
constexpr ::MA::Flora::OcclusionCullingCommonConfig  MA::Flora::OcclusionCullingCommonConfig::MaxOccluderSilhouettePlanes{static_cast<int32_t>(0x6)};
constexpr ::MA::Flora::OcclusionCullingCommonConfig  MA::Flora::OcclusionCullingCommonConfig::MaxSubviewsPerView{static_cast<int32_t>(0x6)};
constexpr ::MA::Flora::OcclusionCullingCommonConfig  MA::Flora::OcclusionCullingCommonConfig::DebugPyramidOffset{static_cast<int32_t>(0x4)};
