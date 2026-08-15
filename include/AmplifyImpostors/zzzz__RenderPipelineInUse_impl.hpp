#pragma once
// IWYU pragma private; include "AmplifyImpostors/RenderPipelineInUse.hpp"
#include "AmplifyImpostors/zzzz__RenderPipelineInUse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::RenderPipelineInUse::RenderPipelineInUse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::RenderPipelineInUse::RenderPipelineInUse()   {
}
constexpr ::AmplifyImpostors::RenderPipelineInUse  AmplifyImpostors::RenderPipelineInUse::None{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::RenderPipelineInUse  AmplifyImpostors::RenderPipelineInUse::HDRP{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::RenderPipelineInUse  AmplifyImpostors::RenderPipelineInUse::URP{static_cast<int32_t>(0x2)};
constexpr ::AmplifyImpostors::RenderPipelineInUse  AmplifyImpostors::RenderPipelineInUse::Custom{static_cast<int32_t>(0x3)};
