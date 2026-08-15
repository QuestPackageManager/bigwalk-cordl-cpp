#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/DelayType.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DelayType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::DelayType::DelayType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::DelayType::DelayType()   {
}
constexpr ::Cysharp::Threading::Tasks::DelayType  Cysharp::Threading::Tasks::DelayType::DeltaTime{static_cast<int32_t>(0x0)};
constexpr ::Cysharp::Threading::Tasks::DelayType  Cysharp::Threading::Tasks::DelayType::UnscaledDeltaTime{static_cast<int32_t>(0x1)};
constexpr ::Cysharp::Threading::Tasks::DelayType  Cysharp::Threading::Tasks::DelayType::Realtime{static_cast<int32_t>(0x2)};
