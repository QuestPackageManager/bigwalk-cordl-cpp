#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityScrollDirection.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityScrollDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection::AccessibilityScrollDirection(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection::AccessibilityScrollDirection()   {
}
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection  UnityEngine::Accessibility::AccessibilityScrollDirection::Unknown{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection  UnityEngine::Accessibility::AccessibilityScrollDirection::Forward{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection  UnityEngine::Accessibility::AccessibilityScrollDirection::Backward{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection  UnityEngine::Accessibility::AccessibilityScrollDirection::Left{static_cast<uint8_t>(0x3u)};
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection  UnityEngine::Accessibility::AccessibilityScrollDirection::Right{static_cast<uint8_t>(0x4u)};
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection  UnityEngine::Accessibility::AccessibilityScrollDirection::Up{static_cast<uint8_t>(0x5u)};
constexpr ::UnityEngine::Accessibility::AccessibilityScrollDirection  UnityEngine::Accessibility::AccessibilityScrollDirection::Down{static_cast<uint8_t>(0x6u)};
