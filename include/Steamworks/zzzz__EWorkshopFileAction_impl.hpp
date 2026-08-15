#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopFileAction.hpp"
#include "Steamworks/zzzz__EWorkshopFileAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EWorkshopFileAction::EWorkshopFileAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EWorkshopFileAction::EWorkshopFileAction()   {
}
constexpr ::Steamworks::EWorkshopFileAction  Steamworks::EWorkshopFileAction::k_EWorkshopFileActionPlayed{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EWorkshopFileAction  Steamworks::EWorkshopFileAction::k_EWorkshopFileActionCompleted{static_cast<int32_t>(0x1)};
