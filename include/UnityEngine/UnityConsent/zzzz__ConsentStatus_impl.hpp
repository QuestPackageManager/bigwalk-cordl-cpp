#pragma once
// IWYU pragma private; include "UnityEngine/UnityConsent/ConsentStatus.hpp"
#include "UnityEngine/UnityConsent/zzzz__ConsentStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UnityConsent::ConsentStatus::ConsentStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UnityConsent::ConsentStatus::ConsentStatus()   {
}
constexpr ::UnityEngine::UnityConsent::ConsentStatus  UnityEngine::UnityConsent::ConsentStatus::Unspecified{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UnityConsent::ConsentStatus  UnityEngine::UnityConsent::ConsentStatus::Granted{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UnityConsent::ConsentStatus  UnityEngine::UnityConsent::ConsentStatus::Denied{static_cast<int32_t>(0x2)};
