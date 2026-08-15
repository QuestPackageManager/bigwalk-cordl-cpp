#pragma once
// IWYU pragma private; include "UnityEngine/CustomRenderTextureUpdateMode.hpp"
#include "UnityEngine/zzzz__CustomRenderTextureUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CustomRenderTextureUpdateMode::CustomRenderTextureUpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::CustomRenderTextureUpdateMode::CustomRenderTextureUpdateMode()   {
}
constexpr ::UnityEngine::CustomRenderTextureUpdateMode  UnityEngine::CustomRenderTextureUpdateMode::OnLoad{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::CustomRenderTextureUpdateMode  UnityEngine::CustomRenderTextureUpdateMode::Realtime{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::CustomRenderTextureUpdateMode  UnityEngine::CustomRenderTextureUpdateMode::OnDemand{static_cast<int32_t>(0x2)};
