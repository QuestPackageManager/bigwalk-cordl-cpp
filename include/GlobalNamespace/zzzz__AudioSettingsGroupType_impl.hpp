#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioSettingsGroupType.hpp"
#include "GlobalNamespace/zzzz__AudioSettingsGroupType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioSettingsGroupType::AudioSettingsGroupType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioSettingsGroupType::AudioSettingsGroupType()   {
}
constexpr ::GlobalNamespace::AudioSettingsGroupType  GlobalNamespace::AudioSettingsGroupType::SFX{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioSettingsGroupType  GlobalNamespace::AudioSettingsGroupType::Music{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioSettingsGroupType  GlobalNamespace::AudioSettingsGroupType::VO{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AudioSettingsGroupType  GlobalNamespace::AudioSettingsGroupType::UI{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::AudioSettingsGroupType  GlobalNamespace::AudioSettingsGroupType::Environment{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::AudioSettingsGroupType  GlobalNamespace::AudioSettingsGroupType::Foley{static_cast<int32_t>(0x5)};
