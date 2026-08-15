#pragma once
// IWYU pragma private; include "Steamworks/EBeginAuthSessionResult.hpp"
#include "Steamworks/zzzz__EBeginAuthSessionResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EBeginAuthSessionResult::EBeginAuthSessionResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EBeginAuthSessionResult::EBeginAuthSessionResult()   {
}
constexpr ::Steamworks::EBeginAuthSessionResult  Steamworks::EBeginAuthSessionResult::k_EBeginAuthSessionResultOK{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EBeginAuthSessionResult  Steamworks::EBeginAuthSessionResult::k_EBeginAuthSessionResultInvalidTicket{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EBeginAuthSessionResult  Steamworks::EBeginAuthSessionResult::k_EBeginAuthSessionResultDuplicateRequest{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EBeginAuthSessionResult  Steamworks::EBeginAuthSessionResult::k_EBeginAuthSessionResultInvalidVersion{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EBeginAuthSessionResult  Steamworks::EBeginAuthSessionResult::k_EBeginAuthSessionResultGameMismatch{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EBeginAuthSessionResult  Steamworks::EBeginAuthSessionResult::k_EBeginAuthSessionResultExpiredTicket{static_cast<int32_t>(0x5)};
