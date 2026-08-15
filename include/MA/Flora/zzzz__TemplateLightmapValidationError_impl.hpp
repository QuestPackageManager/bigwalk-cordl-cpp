#pragma once
// IWYU pragma private; include "MA/Flora/TemplateLightmapValidationError.hpp"
#include "MA/Flora/zzzz__TemplateLightmapValidationError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateLightmapValidationError::TemplateLightmapValidationError(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateLightmapValidationError::TemplateLightmapValidationError()   {
}
constexpr ::MA::Flora::TemplateLightmapValidationError  MA::Flora::TemplateLightmapValidationError::None{static_cast<uint8_t>(0x0u)};
constexpr ::MA::Flora::TemplateLightmapValidationError  MA::Flora::TemplateLightmapValidationError::MixedStaticLightingModes{static_cast<uint8_t>(0x1u)};
constexpr ::MA::Flora::TemplateLightmapValidationError  MA::Flora::TemplateLightmapValidationError::MixedLightmapIndices{static_cast<uint8_t>(0x2u)};
constexpr ::MA::Flora::TemplateLightmapValidationError  MA::Flora::TemplateLightmapValidationError::MixedLightmapScaleOffsets{static_cast<uint8_t>(0x3u)};
