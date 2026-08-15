#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationSoundElement.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundElement_def.hpp"
// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "GroupIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VegetationSoundElement::VegetationSoundElement(::Unity::Mathematics::float3  Position, float_t  Radius, int32_t  GroupIndex) noexcept  {
this->Position = Position;
this->Radius = Radius;
this->GroupIndex = GroupIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VegetationSoundElement::VegetationSoundElement()   {
}
