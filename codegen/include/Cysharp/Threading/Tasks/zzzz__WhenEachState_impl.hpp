#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/WhenEachState.hpp"
#include "Cysharp/Threading/Tasks/zzzz__WhenEachState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::WhenEachState::WhenEachState(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::WhenEachState::WhenEachState()   {
}
constexpr ::Cysharp::Threading::Tasks::WhenEachState  Cysharp::Threading::Tasks::WhenEachState::NotRunning{static_cast<uint8_t>(0x0u)};
constexpr ::Cysharp::Threading::Tasks::WhenEachState  Cysharp::Threading::Tasks::WhenEachState::Running{static_cast<uint8_t>(0x1u)};
constexpr ::Cysharp::Threading::Tasks::WhenEachState  Cysharp::Threading::Tasks::WhenEachState::Completed{static_cast<uint8_t>(0x2u)};
