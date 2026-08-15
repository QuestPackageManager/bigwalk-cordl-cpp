#pragma once
// IWYU pragma private; include "AmplifyImpostors/PresetPipeline.hpp"
#include "AmplifyImpostors/zzzz__PresetPipeline_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::PresetPipeline::PresetPipeline(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::PresetPipeline::PresetPipeline()   {
}
constexpr ::AmplifyImpostors::PresetPipeline  AmplifyImpostors::PresetPipeline::Legacy{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::PresetPipeline  AmplifyImpostors::PresetPipeline::Lightweight{static_cast<int32_t>(0x1)};
constexpr ::AmplifyImpostors::PresetPipeline  AmplifyImpostors::PresetPipeline::HighDefinition{static_cast<int32_t>(0x2)};
