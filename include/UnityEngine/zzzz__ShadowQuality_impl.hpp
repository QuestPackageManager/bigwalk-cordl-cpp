#pragma once
// IWYU pragma private; include "UnityEngine/ShadowQuality.hpp"
#include "UnityEngine/zzzz__ShadowQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ShadowQuality::ShadowQuality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ShadowQuality::ShadowQuality()   {
}
constexpr ::UnityEngine::ShadowQuality  UnityEngine::ShadowQuality::Disable{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ShadowQuality  UnityEngine::ShadowQuality::HardOnly{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ShadowQuality  UnityEngine::ShadowQuality::All{static_cast<int32_t>(0x2)};
