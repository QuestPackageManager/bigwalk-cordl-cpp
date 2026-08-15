#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/InjectPlayerLoopTimings.hpp"
#include "Cysharp/Threading/Tasks/zzzz__InjectPlayerLoopTimings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings::InjectPlayerLoopTimings(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings::InjectPlayerLoopTimings()   {
}
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::All{static_cast<int32_t>(0xffff)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::Standard{static_cast<int32_t>(0x7555)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::Minimum{static_cast<int32_t>(0x2110)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::Initialization{static_cast<int32_t>(0x1)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::LastInitialization{static_cast<int32_t>(0x2)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::EarlyUpdate{static_cast<int32_t>(0x4)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::LastEarlyUpdate{static_cast<int32_t>(0x8)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::FixedUpdate{static_cast<int32_t>(0x10)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::LastFixedUpdate{static_cast<int32_t>(0x20)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::PreUpdate{static_cast<int32_t>(0x40)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::LastPreUpdate{static_cast<int32_t>(0x80)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::Update{static_cast<int32_t>(0x100)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::LastUpdate{static_cast<int32_t>(0x200)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::PreLateUpdate{static_cast<int32_t>(0x400)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::LastPreLateUpdate{static_cast<int32_t>(0x800)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::PostLateUpdate{static_cast<int32_t>(0x1000)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::LastPostLateUpdate{static_cast<int32_t>(0x2000)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::TimeUpdate{static_cast<int32_t>(0x4000)};
constexpr ::Cysharp::Threading::Tasks::InjectPlayerLoopTimings  Cysharp::Threading::Tasks::InjectPlayerLoopTimings::LastTimeUpdate{static_cast<int32_t>(0x8000)};
