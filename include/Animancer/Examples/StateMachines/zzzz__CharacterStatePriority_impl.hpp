#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/CharacterStatePriority.hpp"
#include "Animancer/Examples/StateMachines/zzzz__CharacterStatePriority_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::Examples::StateMachines::CharacterStatePriority::CharacterStatePriority(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::Examples::StateMachines::CharacterStatePriority::CharacterStatePriority()   {
}
constexpr ::Animancer::Examples::StateMachines::CharacterStatePriority  Animancer::Examples::StateMachines::CharacterStatePriority::Low{static_cast<int32_t>(0x0)};
constexpr ::Animancer::Examples::StateMachines::CharacterStatePriority  Animancer::Examples::StateMachines::CharacterStatePriority::Medium{static_cast<int32_t>(0x1)};
constexpr ::Animancer::Examples::StateMachines::CharacterStatePriority  Animancer::Examples::StateMachines::CharacterStatePriority::High{static_cast<int32_t>(0x2)};
