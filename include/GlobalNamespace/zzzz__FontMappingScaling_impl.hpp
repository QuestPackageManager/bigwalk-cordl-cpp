#pragma once
// IWYU pragma private; include "GlobalNamespace/FontMappingScaling.hpp"
#include "GlobalNamespace/zzzz__FontMappingScaling_def.hpp"
#include "GlobalNamespace/zzzz__FontMappingScaling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FontMappingScaling_UseCase::FontMappingScaling_UseCase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontMappingScaling_UseCase::FontMappingScaling_UseCase()   {
}
constexpr ::GlobalNamespace::FontMappingScaling_UseCase  GlobalNamespace::FontMappingScaling_UseCase::GoalsMenu{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FontMappingScaling_UseCase  GlobalNamespace::FontMappingScaling_UseCase::ControlsDiagram{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "useCase", ty: "::GlobalNamespace::FontMappingScaling_UseCase", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::FontMappingScaling::FontMappingScaling(float_t  scale, ::GlobalNamespace::FontMappingScaling_UseCase  useCase) noexcept  {
this->scale = scale;
this->useCase = useCase;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FontMappingScaling::FontMappingScaling()   {
}
