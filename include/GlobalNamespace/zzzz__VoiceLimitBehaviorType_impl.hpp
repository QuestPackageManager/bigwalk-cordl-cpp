#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLimitBehaviorType.hpp"
#include "GlobalNamespace/zzzz__VoiceLimitBehaviorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VoiceLimitBehaviorType::VoiceLimitBehaviorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLimitBehaviorType::VoiceLimitBehaviorType()   {
}
constexpr ::GlobalNamespace::VoiceLimitBehaviorType  GlobalNamespace::VoiceLimitBehaviorType::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::VoiceLimitBehaviorType  GlobalNamespace::VoiceLimitBehaviorType::RejectNew{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VoiceLimitBehaviorType  GlobalNamespace::VoiceLimitBehaviorType::StopMostAttenuated{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VoiceLimitBehaviorType  GlobalNamespace::VoiceLimitBehaviorType::StopOldest{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VoiceLimitBehaviorType  GlobalNamespace::VoiceLimitBehaviorType::VirtualizeMostAttenuated{static_cast<int32_t>(0x3)};
