#pragma once
// IWYU pragma private; include "Rewired/Utils/UI/PositionType.hpp"
#include "Rewired/Utils/UI/zzzz__PositionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Utils::UI::PositionType::PositionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Utils::UI::PositionType::PositionType()   {
}
constexpr ::Rewired::Utils::UI::PositionType  Rewired::Utils::UI::PositionType::World{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Utils::UI::PositionType  Rewired::Utils::UI::PositionType::Local{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Utils::UI::PositionType  Rewired::Utils::UI::PositionType::Anchored{static_cast<int32_t>(0x2)};
