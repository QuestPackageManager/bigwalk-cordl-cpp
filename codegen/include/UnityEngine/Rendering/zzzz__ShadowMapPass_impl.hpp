#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowMapPass.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowMapPass_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShadowMapPass::ShadowMapPass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShadowMapPass::ShadowMapPass()   {
}
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::PointlightPositiveX{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::PointlightNegativeX{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::PointlightPositiveY{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::PointlightNegativeY{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::PointlightPositiveZ{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::PointlightNegativeZ{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::DirectionalCascade0{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::DirectionalCascade1{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::DirectionalCascade2{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::DirectionalCascade3{static_cast<int32_t>(0x200)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::Spotlight{static_cast<int32_t>(0x400)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::AreaLight{static_cast<int32_t>(0x800)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::Pointlight{static_cast<int32_t>(0x3f)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::Directional{static_cast<int32_t>(0x3c0)};
constexpr ::UnityEngine::Rendering::ShadowMapPass  UnityEngine::Rendering::ShadowMapPass::All{static_cast<int32_t>(0x7ff)};
