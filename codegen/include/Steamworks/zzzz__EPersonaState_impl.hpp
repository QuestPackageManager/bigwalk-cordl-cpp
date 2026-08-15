#pragma once
// IWYU pragma private; include "Steamworks/EPersonaState.hpp"
#include "Steamworks/zzzz__EPersonaState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EPersonaState::EPersonaState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EPersonaState::EPersonaState()   {
}
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateOffline{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateOnline{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateBusy{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateAway{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateSnooze{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateLookingToTrade{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateLookingToPlay{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateInvisible{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EPersonaState  Steamworks::EPersonaState::k_EPersonaStateMax{static_cast<int32_t>(0x8)};
