#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Metrics/UserControllerType.hpp"
#include "Epic/OnlineServices/Metrics/zzzz__UserControllerType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Metrics::UserControllerType::UserControllerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Metrics::UserControllerType::UserControllerType()   {
}
constexpr ::Epic::OnlineServices::Metrics::UserControllerType  Epic::OnlineServices::Metrics::UserControllerType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Metrics::UserControllerType  Epic::OnlineServices::Metrics::UserControllerType::MouseKeyboard{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Metrics::UserControllerType  Epic::OnlineServices::Metrics::UserControllerType::GamepadControl{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Metrics::UserControllerType  Epic::OnlineServices::Metrics::UserControllerType::TouchControl{static_cast<int32_t>(0x3)};
