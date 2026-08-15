#pragma once
// IWYU pragma private; include "MA/Flora/InstanceTag.hpp"
#include "MA/Flora/zzzz__InstanceTag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::InstanceTag::InstanceTag(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::InstanceTag::InstanceTag()   {
}
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::None{static_cast<uint32_t>(0x0u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::Enabled{static_cast<uint32_t>(0x1u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::RandomID{static_cast<uint32_t>(0x400u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::VariationColor{static_cast<uint32_t>(0x800u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::Renderer{static_cast<uint32_t>(0x100000u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::LODGroup{static_cast<uint32_t>(0x200000u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::Billboard{static_cast<uint32_t>(0x400000u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::TerrainTree{static_cast<uint32_t>(0x800000u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::TerrainDetail{static_cast<uint32_t>(0x1000000u)};
constexpr ::MA::Flora::InstanceTag  MA::Flora::InstanceTag::ContainerOwned{static_cast<uint32_t>(0x2000000u)};
