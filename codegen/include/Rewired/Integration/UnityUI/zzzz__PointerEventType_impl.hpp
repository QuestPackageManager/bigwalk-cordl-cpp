#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/PointerEventType.hpp"
#include "Rewired/Integration/UnityUI/zzzz__PointerEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Integration::UnityUI::PointerEventType::PointerEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::PointerEventType::PointerEventType()   {
}
constexpr ::Rewired::Integration::UnityUI::PointerEventType  Rewired::Integration::UnityUI::PointerEventType::Mouse{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Integration::UnityUI::PointerEventType  Rewired::Integration::UnityUI::PointerEventType::Touch{static_cast<int32_t>(0x1)};
