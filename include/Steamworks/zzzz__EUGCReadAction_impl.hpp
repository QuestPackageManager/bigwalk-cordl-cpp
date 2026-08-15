#pragma once
// IWYU pragma private; include "Steamworks/EUGCReadAction.hpp"
#include "Steamworks/zzzz__EUGCReadAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EUGCReadAction::EUGCReadAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EUGCReadAction::EUGCReadAction()   {
}
constexpr ::Steamworks::EUGCReadAction  Steamworks::EUGCReadAction::k_EUGCRead_ContinueReadingUntilFinished{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EUGCReadAction  Steamworks::EUGCReadAction::k_EUGCRead_ContinueReading{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EUGCReadAction  Steamworks::EUGCReadAction::k_EUGCRead_Close{static_cast<int32_t>(0x2)};
