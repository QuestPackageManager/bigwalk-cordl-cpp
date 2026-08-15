#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/PlayerLoopTiming.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming::PlayerLoopTiming(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming::PlayerLoopTiming()   {
}
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::Initialization{static_cast<int32_t>(0x0)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::LastInitialization{static_cast<int32_t>(0x1)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::EarlyUpdate{static_cast<int32_t>(0x2)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::LastEarlyUpdate{static_cast<int32_t>(0x3)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::FixedUpdate{static_cast<int32_t>(0x4)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::LastFixedUpdate{static_cast<int32_t>(0x5)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::PreUpdate{static_cast<int32_t>(0x6)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::LastPreUpdate{static_cast<int32_t>(0x7)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::Update{static_cast<int32_t>(0x8)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::LastUpdate{static_cast<int32_t>(0x9)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::PreLateUpdate{static_cast<int32_t>(0xa)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::LastPreLateUpdate{static_cast<int32_t>(0xb)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::PostLateUpdate{static_cast<int32_t>(0xc)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::LastPostLateUpdate{static_cast<int32_t>(0xd)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::TimeUpdate{static_cast<int32_t>(0xe)};
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming  Cysharp::Threading::Tasks::PlayerLoopTiming::LastTimeUpdate{static_cast<int32_t>(0xf)};
