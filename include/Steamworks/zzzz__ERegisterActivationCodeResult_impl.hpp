#pragma once
// IWYU pragma private; include "Steamworks/ERegisterActivationCodeResult.hpp"
#include "Steamworks/zzzz__ERegisterActivationCodeResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ERegisterActivationCodeResult::ERegisterActivationCodeResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ERegisterActivationCodeResult::ERegisterActivationCodeResult()   {
}
constexpr ::Steamworks::ERegisterActivationCodeResult  Steamworks::ERegisterActivationCodeResult::k_ERegisterActivationCodeResultOK{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ERegisterActivationCodeResult  Steamworks::ERegisterActivationCodeResult::k_ERegisterActivationCodeResultFail{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ERegisterActivationCodeResult  Steamworks::ERegisterActivationCodeResult::k_ERegisterActivationCodeResultAlreadyRegistered{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ERegisterActivationCodeResult  Steamworks::ERegisterActivationCodeResult::k_ERegisterActivationCodeResultTimeout{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ERegisterActivationCodeResult  Steamworks::ERegisterActivationCodeResult::k_ERegisterActivationCodeAlreadyOwned{static_cast<int32_t>(0x4)};
