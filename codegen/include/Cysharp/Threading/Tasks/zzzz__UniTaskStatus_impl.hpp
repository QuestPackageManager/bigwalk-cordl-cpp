#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskStatus.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Cysharp::Threading::Tasks::UniTaskStatus::UniTaskStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskStatus::UniTaskStatus()   {
}
constexpr ::Cysharp::Threading::Tasks::UniTaskStatus  Cysharp::Threading::Tasks::UniTaskStatus::Pending{static_cast<int32_t>(0x0)};
constexpr ::Cysharp::Threading::Tasks::UniTaskStatus  Cysharp::Threading::Tasks::UniTaskStatus::Succeeded{static_cast<int32_t>(0x1)};
constexpr ::Cysharp::Threading::Tasks::UniTaskStatus  Cysharp::Threading::Tasks::UniTaskStatus::Faulted{static_cast<int32_t>(0x2)};
constexpr ::Cysharp::Threading::Tasks::UniTaskStatus  Cysharp::Threading::Tasks::UniTaskStatus::Canceled{static_cast<int32_t>(0x3)};
