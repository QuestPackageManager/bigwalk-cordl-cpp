#pragma once
// IWYU pragma private; include "MA/Flora/TemplateRenderFlags.hpp"
#include "MA/Flora/zzzz__TemplateRenderFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TemplateRenderFlags::TemplateRenderFlags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateRenderFlags::TemplateRenderFlags()   {
}
constexpr ::MA::Flora::TemplateRenderFlags  MA::Flora::TemplateRenderFlags::None{static_cast<uint8_t>(0x0u)};
constexpr ::MA::Flora::TemplateRenderFlags  MA::Flora::TemplateRenderFlags::HasLightProbes{static_cast<uint8_t>(0x2u)};
constexpr ::MA::Flora::TemplateRenderFlags  MA::Flora::TemplateRenderFlags::HasLightmaps{static_cast<uint8_t>(0x4u)};
constexpr ::MA::Flora::TemplateRenderFlags  MA::Flora::TemplateRenderFlags::HasShadowCasters{static_cast<uint8_t>(0x8u)};
constexpr ::MA::Flora::TemplateRenderFlags  MA::Flora::TemplateRenderFlags::HasPerObjectMotionVectors{static_cast<uint8_t>(0x10u)};
constexpr ::MA::Flora::TemplateRenderFlags  MA::Flora::TemplateRenderFlags::HasRandomID{static_cast<uint8_t>(0x20u)};
constexpr ::MA::Flora::TemplateRenderFlags  MA::Flora::TemplateRenderFlags::HasVariationColor{static_cast<uint8_t>(0x40u)};
