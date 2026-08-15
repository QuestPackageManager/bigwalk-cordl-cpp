#pragma once
// IWYU pragma private; include "Steamworks/SteamInputActionEvent_t.hpp"
#include "Steamworks/zzzz__ESteamInputActionEventType_impl.hpp"
#include "Steamworks/zzzz__InputAnalogActionData_t_impl.hpp"
#include "Steamworks/zzzz__InputAnalogActionHandle_t_impl.hpp"
#include "Steamworks/zzzz__InputDigitalActionData_t_impl.hpp"
#include "Steamworks/zzzz__InputDigitalActionHandle_t_impl.hpp"
#include "Steamworks/zzzz__InputHandle_t_impl.hpp"
#include "Steamworks/zzzz__SteamInputActionEvent_t_def.hpp"
#include "Steamworks/zzzz__SteamInputActionEvent_t_def.hpp"
// Ctor Parameters [CppParam { name: "actionHandle", ty: "::Steamworks::InputAnalogActionHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "analogActionData", ty: "::Steamworks::InputAnalogActionData_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInputActionEvent_t_AnalogAction_t::SteamInputActionEvent_t_AnalogAction_t(::Steamworks::InputAnalogActionHandle_t  actionHandle, ::Steamworks::InputAnalogActionData_t  analogActionData) noexcept  {
this->actionHandle = actionHandle;
this->analogActionData = analogActionData;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInputActionEvent_t_AnalogAction_t::SteamInputActionEvent_t_AnalogAction_t()   {
}
// Ctor Parameters [CppParam { name: "actionHandle", ty: "::Steamworks::InputDigitalActionHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "digitalActionData", ty: "::Steamworks::InputDigitalActionData_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInputActionEvent_t_DigitalAction_t::SteamInputActionEvent_t_DigitalAction_t(::Steamworks::InputDigitalActionHandle_t  actionHandle, ::Steamworks::InputDigitalActionData_t  digitalActionData) noexcept  {
this->actionHandle = actionHandle;
this->digitalActionData = digitalActionData;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInputActionEvent_t_DigitalAction_t::SteamInputActionEvent_t_DigitalAction_t()   {
}
constexpr ::Steamworks::SteamInputActionEvent_t_AnalogAction_t& Steamworks::SteamInputActionEvent_t_OptionValue::__cordl_internal_get_analogAction()  {
return this->___analogAction;
}
constexpr ::Steamworks::SteamInputActionEvent_t_AnalogAction_t const& Steamworks::SteamInputActionEvent_t_OptionValue::__cordl_internal_get_analogAction() const {
return this->___analogAction;
}
constexpr void Steamworks::SteamInputActionEvent_t_OptionValue::__cordl_internal_set_analogAction(::Steamworks::SteamInputActionEvent_t_AnalogAction_t  value)  {
this->___analogAction = value;
}
constexpr ::Steamworks::SteamInputActionEvent_t_DigitalAction_t& Steamworks::SteamInputActionEvent_t_OptionValue::__cordl_internal_get_digitalAction()  {
return this->___digitalAction;
}
constexpr ::Steamworks::SteamInputActionEvent_t_DigitalAction_t const& Steamworks::SteamInputActionEvent_t_OptionValue::__cordl_internal_get_digitalAction() const {
return this->___digitalAction;
}
constexpr void Steamworks::SteamInputActionEvent_t_OptionValue::__cordl_internal_set_digitalAction(::Steamworks::SteamInputActionEvent_t_DigitalAction_t  value)  {
this->___digitalAction = value;
}
// Ctor Parameters [CppParam { name: "analogAction", ty: "::Steamworks::SteamInputActionEvent_t_AnalogAction_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "digitalAction", ty: "::Steamworks::SteamInputActionEvent_t_DigitalAction_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInputActionEvent_t_OptionValue::SteamInputActionEvent_t_OptionValue(::Steamworks::SteamInputActionEvent_t_AnalogAction_t  analogAction, ::Steamworks::SteamInputActionEvent_t_DigitalAction_t  digitalAction) noexcept  {
this->analogAction = analogAction;
this->digitalAction = digitalAction;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInputActionEvent_t_OptionValue::SteamInputActionEvent_t_OptionValue()   {
}
// Ctor Parameters [CppParam { name: "controllerHandle", ty: "::Steamworks::InputHandle_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eEventType", ty: "::Steamworks::ESteamInputActionEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_val", ty: "::Steamworks::SteamInputActionEvent_t_OptionValue", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamInputActionEvent_t::SteamInputActionEvent_t(::Steamworks::InputHandle_t  controllerHandle, ::Steamworks::ESteamInputActionEventType  eEventType, ::Steamworks::SteamInputActionEvent_t_OptionValue  m_val) noexcept  {
this->controllerHandle = controllerHandle;
this->eEventType = eEventType;
this->m_val = m_val;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamInputActionEvent_t::SteamInputActionEvent_t()   {
}
