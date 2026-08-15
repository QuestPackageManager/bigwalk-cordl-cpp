#pragma once
// IWYU pragma private; include "Dissonance/CommTriggerTarget.hpp"
#include "Dissonance/zzzz__CommTriggerTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::CommTriggerTarget::CommTriggerTarget(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::CommTriggerTarget::CommTriggerTarget()   {
}
constexpr ::Dissonance::CommTriggerTarget  Dissonance::CommTriggerTarget::Room{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::CommTriggerTarget  Dissonance::CommTriggerTarget::Player{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::CommTriggerTarget  Dissonance::CommTriggerTarget::Self{static_cast<int32_t>(0x2)};
