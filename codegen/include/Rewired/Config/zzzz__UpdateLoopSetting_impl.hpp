#pragma once
// IWYU pragma private; include "Rewired/Config/UpdateLoopSetting.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Config::UpdateLoopSetting::UpdateLoopSetting(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Config::UpdateLoopSetting::UpdateLoopSetting()   {
}
constexpr ::Rewired::Config::UpdateLoopSetting  Rewired::Config::UpdateLoopSetting::None{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Config::UpdateLoopSetting  Rewired::Config::UpdateLoopSetting::Update{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Config::UpdateLoopSetting  Rewired::Config::UpdateLoopSetting::FixedUpdate{static_cast<int32_t>(0x2)};
constexpr ::Rewired::Config::UpdateLoopSetting  Rewired::Config::UpdateLoopSetting::OnGUI{static_cast<int32_t>(0x4)};
