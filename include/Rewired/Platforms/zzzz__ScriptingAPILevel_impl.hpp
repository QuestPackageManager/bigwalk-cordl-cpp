#pragma once
// IWYU pragma private; include "Rewired/Platforms/ScriptingAPILevel.hpp"
#include "Rewired/Platforms/zzzz__ScriptingAPILevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Platforms::ScriptingAPILevel::ScriptingAPILevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Platforms::ScriptingAPILevel::ScriptingAPILevel()   {
}
constexpr ::Rewired::Platforms::ScriptingAPILevel  Rewired::Platforms::ScriptingAPILevel::Net20{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Platforms::ScriptingAPILevel  Rewired::Platforms::ScriptingAPILevel::Net20Subset{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Platforms::ScriptingAPILevel  Rewired::Platforms::ScriptingAPILevel::Net46{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Platforms::ScriptingAPILevel  Rewired::Platforms::ScriptingAPILevel::NetStandard20{static_cast<int32_t>(0x3)};
