#pragma once
// IWYU pragma private; include "Steamworks/EP2PSessionError.hpp"
#include "Steamworks/zzzz__EP2PSessionError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EP2PSessionError::EP2PSessionError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EP2PSessionError::EP2PSessionError()   {
}
constexpr ::Steamworks::EP2PSessionError  Steamworks::EP2PSessionError::k_EP2PSessionErrorNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EP2PSessionError  Steamworks::EP2PSessionError::k_EP2PSessionErrorNoRightsToApp{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EP2PSessionError  Steamworks::EP2PSessionError::k_EP2PSessionErrorTimeout{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EP2PSessionError  Steamworks::EP2PSessionError::k_EP2PSessionErrorNotRunningApp_DELETED{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EP2PSessionError  Steamworks::EP2PSessionError::k_EP2PSessionErrorDestinationNotLoggedIn_DELETED{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EP2PSessionError  Steamworks::EP2PSessionError::k_EP2PSessionErrorMax{static_cast<int32_t>(0x5)};
