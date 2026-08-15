#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityState.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Accessibility::AccessibilityState::AccessibilityState(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityState::AccessibilityState()   {
}
constexpr ::UnityEngine::Accessibility::AccessibilityState  UnityEngine::Accessibility::AccessibilityState::None{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Accessibility::AccessibilityState  UnityEngine::Accessibility::AccessibilityState::Disabled{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Accessibility::AccessibilityState  UnityEngine::Accessibility::AccessibilityState::Selected{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::Accessibility::AccessibilityState  UnityEngine::Accessibility::AccessibilityState::Expanded{static_cast<uint8_t>(0x4u)};
