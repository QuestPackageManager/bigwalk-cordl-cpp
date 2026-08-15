#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientInput.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientInput_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput::AntiCheatCommonClientInput(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput::AntiCheatCommonClientInput()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput::MouseKeyboard{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput::Gamepad{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientInput::TouchInput{static_cast<int32_t>(0x3)};
