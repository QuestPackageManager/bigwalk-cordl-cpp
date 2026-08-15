#pragma once
// IWYU pragma private; include "Steamworks/EAuthSessionResponse.hpp"
#include "Steamworks/zzzz__EAuthSessionResponse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EAuthSessionResponse::EAuthSessionResponse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EAuthSessionResponse::EAuthSessionResponse()   {
}
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseOK{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseUserNotConnectedToSteam{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseNoLicenseOrExpired{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseVACBanned{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseLoggedInElseWhere{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseVACCheckTimedOut{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseAuthTicketCanceled{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponseAuthTicketInvalid{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EAuthSessionResponse  Steamworks::EAuthSessionResponse::k_EAuthSessionResponsePublisherIssuedBan{static_cast<int32_t>(0x9)};
