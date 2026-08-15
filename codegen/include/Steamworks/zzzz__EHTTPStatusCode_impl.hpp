#pragma once
// IWYU pragma private; include "Steamworks/EHTTPStatusCode.hpp"
#include "Steamworks/zzzz__EHTTPStatusCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EHTTPStatusCode::EHTTPStatusCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EHTTPStatusCode::EHTTPStatusCode()   {
}
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCodeInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode100Continue{static_cast<int32_t>(0x64)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode101SwitchingProtocols{static_cast<int32_t>(0x65)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode200OK{static_cast<int32_t>(0xc8)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode201Created{static_cast<int32_t>(0xc9)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode202Accepted{static_cast<int32_t>(0xca)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode203NonAuthoritative{static_cast<int32_t>(0xcb)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode204NoContent{static_cast<int32_t>(0xcc)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode205ResetContent{static_cast<int32_t>(0xcd)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode206PartialContent{static_cast<int32_t>(0xce)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode300MultipleChoices{static_cast<int32_t>(0x12c)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode301MovedPermanently{static_cast<int32_t>(0x12d)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode302Found{static_cast<int32_t>(0x12e)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode303SeeOther{static_cast<int32_t>(0x12f)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode304NotModified{static_cast<int32_t>(0x130)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode305UseProxy{static_cast<int32_t>(0x131)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode307TemporaryRedirect{static_cast<int32_t>(0x133)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode400BadRequest{static_cast<int32_t>(0x190)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode401Unauthorized{static_cast<int32_t>(0x191)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode402PaymentRequired{static_cast<int32_t>(0x192)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode403Forbidden{static_cast<int32_t>(0x193)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode404NotFound{static_cast<int32_t>(0x194)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode405MethodNotAllowed{static_cast<int32_t>(0x195)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode406NotAcceptable{static_cast<int32_t>(0x196)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode407ProxyAuthRequired{static_cast<int32_t>(0x197)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode408RequestTimeout{static_cast<int32_t>(0x198)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode409Conflict{static_cast<int32_t>(0x199)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode410Gone{static_cast<int32_t>(0x19a)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode411LengthRequired{static_cast<int32_t>(0x19b)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode412PreconditionFailed{static_cast<int32_t>(0x19c)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode413RequestEntityTooLarge{static_cast<int32_t>(0x19d)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode414RequestURITooLong{static_cast<int32_t>(0x19e)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode415UnsupportedMediaType{static_cast<int32_t>(0x19f)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode416RequestedRangeNotSatisfiable{static_cast<int32_t>(0x1a0)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode417ExpectationFailed{static_cast<int32_t>(0x1a1)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode4xxUnknown{static_cast<int32_t>(0x1a2)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode429TooManyRequests{static_cast<int32_t>(0x1ad)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode444ConnectionClosed{static_cast<int32_t>(0x1bc)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode500InternalServerError{static_cast<int32_t>(0x1f4)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode501NotImplemented{static_cast<int32_t>(0x1f5)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode502BadGateway{static_cast<int32_t>(0x1f6)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode503ServiceUnavailable{static_cast<int32_t>(0x1f7)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode504GatewayTimeout{static_cast<int32_t>(0x1f8)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode505HTTPVersionNotSupported{static_cast<int32_t>(0x1f9)};
constexpr ::Steamworks::EHTTPStatusCode  Steamworks::EHTTPStatusCode::k_EHTTPStatusCode5xxUnknown{static_cast<int32_t>(0x257)};
