#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightEvent.hpp"
#include "UnityEngine/Rendering/zzzz__LightEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LightEvent::LightEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LightEvent::LightEvent()   {
}
constexpr ::UnityEngine::Rendering::LightEvent  UnityEngine::Rendering::LightEvent::BeforeShadowMap{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::LightEvent  UnityEngine::Rendering::LightEvent::AfterShadowMap{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::LightEvent  UnityEngine::Rendering::LightEvent::BeforeScreenspaceMask{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::LightEvent  UnityEngine::Rendering::LightEvent::AfterScreenspaceMask{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::LightEvent  UnityEngine::Rendering::LightEvent::BeforeShadowMapPass{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::LightEvent  UnityEngine::Rendering::LightEvent::AfterShadowMapPass{static_cast<int32_t>(0x5)};
