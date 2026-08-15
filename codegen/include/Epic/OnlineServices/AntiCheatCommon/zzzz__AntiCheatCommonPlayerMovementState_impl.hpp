#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonPlayerMovementState.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerMovementState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::AntiCheatCommonPlayerMovementState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::AntiCheatCommonPlayerMovementState()   {
}
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::None{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::Crouching{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::Prone{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::Mounted{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::Swimming{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::Falling{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::Flying{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState::OnLadder{static_cast<int32_t>(0x7)};
