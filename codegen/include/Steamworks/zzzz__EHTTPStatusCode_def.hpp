#pragma once
// IWYU pragma private; include "Steamworks/EHTTPStatusCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EHTTPStatusCode)
// Forward declare root types
namespace Steamworks {
struct EHTTPStatusCode;
}
// Write type traits
MARK_VAL_T(::Steamworks::EHTTPStatusCode);
DEFINE_IL2CPP_CLASS(::Steamworks::EHTTPStatusCode, "Steamworks", "EHTTPStatusCode");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EHTTPStatusCode
struct CORDL_TYPE EHTTPStatusCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EHTTPStatusCode_Unwrapped
enum struct __EHTTPStatusCode_Unwrapped : int32_t {
__E_k_EHTTPStatusCodeInvalid = static_cast<int32_t>(0x0),
__E_k_EHTTPStatusCode100Continue = static_cast<int32_t>(0x64),
__E_k_EHTTPStatusCode101SwitchingProtocols = static_cast<int32_t>(0x65),
__E_k_EHTTPStatusCode200OK = static_cast<int32_t>(0xc8),
__E_k_EHTTPStatusCode201Created = static_cast<int32_t>(0xc9),
__E_k_EHTTPStatusCode202Accepted = static_cast<int32_t>(0xca),
__E_k_EHTTPStatusCode203NonAuthoritative = static_cast<int32_t>(0xcb),
__E_k_EHTTPStatusCode204NoContent = static_cast<int32_t>(0xcc),
__E_k_EHTTPStatusCode205ResetContent = static_cast<int32_t>(0xcd),
__E_k_EHTTPStatusCode206PartialContent = static_cast<int32_t>(0xce),
__E_k_EHTTPStatusCode300MultipleChoices = static_cast<int32_t>(0x12c),
__E_k_EHTTPStatusCode301MovedPermanently = static_cast<int32_t>(0x12d),
__E_k_EHTTPStatusCode302Found = static_cast<int32_t>(0x12e),
__E_k_EHTTPStatusCode303SeeOther = static_cast<int32_t>(0x12f),
__E_k_EHTTPStatusCode304NotModified = static_cast<int32_t>(0x130),
__E_k_EHTTPStatusCode305UseProxy = static_cast<int32_t>(0x131),
__E_k_EHTTPStatusCode307TemporaryRedirect = static_cast<int32_t>(0x133),
__E_k_EHTTPStatusCode400BadRequest = static_cast<int32_t>(0x190),
__E_k_EHTTPStatusCode401Unauthorized = static_cast<int32_t>(0x191),
__E_k_EHTTPStatusCode402PaymentRequired = static_cast<int32_t>(0x192),
__E_k_EHTTPStatusCode403Forbidden = static_cast<int32_t>(0x193),
__E_k_EHTTPStatusCode404NotFound = static_cast<int32_t>(0x194),
__E_k_EHTTPStatusCode405MethodNotAllowed = static_cast<int32_t>(0x195),
__E_k_EHTTPStatusCode406NotAcceptable = static_cast<int32_t>(0x196),
__E_k_EHTTPStatusCode407ProxyAuthRequired = static_cast<int32_t>(0x197),
__E_k_EHTTPStatusCode408RequestTimeout = static_cast<int32_t>(0x198),
__E_k_EHTTPStatusCode409Conflict = static_cast<int32_t>(0x199),
__E_k_EHTTPStatusCode410Gone = static_cast<int32_t>(0x19a),
__E_k_EHTTPStatusCode411LengthRequired = static_cast<int32_t>(0x19b),
__E_k_EHTTPStatusCode412PreconditionFailed = static_cast<int32_t>(0x19c),
__E_k_EHTTPStatusCode413RequestEntityTooLarge = static_cast<int32_t>(0x19d),
__E_k_EHTTPStatusCode414RequestURITooLong = static_cast<int32_t>(0x19e),
__E_k_EHTTPStatusCode415UnsupportedMediaType = static_cast<int32_t>(0x19f),
__E_k_EHTTPStatusCode416RequestedRangeNotSatisfiable = static_cast<int32_t>(0x1a0),
__E_k_EHTTPStatusCode417ExpectationFailed = static_cast<int32_t>(0x1a1),
__E_k_EHTTPStatusCode4xxUnknown = static_cast<int32_t>(0x1a2),
__E_k_EHTTPStatusCode429TooManyRequests = static_cast<int32_t>(0x1ad),
__E_k_EHTTPStatusCode444ConnectionClosed = static_cast<int32_t>(0x1bc),
__E_k_EHTTPStatusCode500InternalServerError = static_cast<int32_t>(0x1f4),
__E_k_EHTTPStatusCode501NotImplemented = static_cast<int32_t>(0x1f5),
__E_k_EHTTPStatusCode502BadGateway = static_cast<int32_t>(0x1f6),
__E_k_EHTTPStatusCode503ServiceUnavailable = static_cast<int32_t>(0x1f7),
__E_k_EHTTPStatusCode504GatewayTimeout = static_cast<int32_t>(0x1f8),
__E_k_EHTTPStatusCode505HTTPVersionNotSupported = static_cast<int32_t>(0x1f9),
__E_k_EHTTPStatusCode5xxUnknown = static_cast<int32_t>(0x257),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EHTTPStatusCode_Unwrapped () const noexcept {
return static_cast<__EHTTPStatusCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EHTTPStatusCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EHTTPStatusCode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EHTTPStatusCode100Continue value: I32(100)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode100Continue;

/// @brief Field k_EHTTPStatusCode101SwitchingProtocols value: I32(101)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode101SwitchingProtocols;

/// @brief Field k_EHTTPStatusCode200OK value: I32(200)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode200OK;

/// @brief Field k_EHTTPStatusCode201Created value: I32(201)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode201Created;

/// @brief Field k_EHTTPStatusCode202Accepted value: I32(202)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode202Accepted;

/// @brief Field k_EHTTPStatusCode203NonAuthoritative value: I32(203)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode203NonAuthoritative;

/// @brief Field k_EHTTPStatusCode204NoContent value: I32(204)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode204NoContent;

/// @brief Field k_EHTTPStatusCode205ResetContent value: I32(205)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode205ResetContent;

/// @brief Field k_EHTTPStatusCode206PartialContent value: I32(206)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode206PartialContent;

/// @brief Field k_EHTTPStatusCode300MultipleChoices value: I32(300)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode300MultipleChoices;

/// @brief Field k_EHTTPStatusCode301MovedPermanently value: I32(301)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode301MovedPermanently;

/// @brief Field k_EHTTPStatusCode302Found value: I32(302)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode302Found;

/// @brief Field k_EHTTPStatusCode303SeeOther value: I32(303)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode303SeeOther;

/// @brief Field k_EHTTPStatusCode304NotModified value: I32(304)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode304NotModified;

/// @brief Field k_EHTTPStatusCode305UseProxy value: I32(305)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode305UseProxy;

/// @brief Field k_EHTTPStatusCode307TemporaryRedirect value: I32(307)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode307TemporaryRedirect;

/// @brief Field k_EHTTPStatusCode400BadRequest value: I32(400)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode400BadRequest;

/// @brief Field k_EHTTPStatusCode401Unauthorized value: I32(401)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode401Unauthorized;

/// @brief Field k_EHTTPStatusCode402PaymentRequired value: I32(402)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode402PaymentRequired;

/// @brief Field k_EHTTPStatusCode403Forbidden value: I32(403)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode403Forbidden;

/// @brief Field k_EHTTPStatusCode404NotFound value: I32(404)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode404NotFound;

/// @brief Field k_EHTTPStatusCode405MethodNotAllowed value: I32(405)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode405MethodNotAllowed;

/// @brief Field k_EHTTPStatusCode406NotAcceptable value: I32(406)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode406NotAcceptable;

/// @brief Field k_EHTTPStatusCode407ProxyAuthRequired value: I32(407)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode407ProxyAuthRequired;

/// @brief Field k_EHTTPStatusCode408RequestTimeout value: I32(408)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode408RequestTimeout;

/// @brief Field k_EHTTPStatusCode409Conflict value: I32(409)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode409Conflict;

/// @brief Field k_EHTTPStatusCode410Gone value: I32(410)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode410Gone;

/// @brief Field k_EHTTPStatusCode411LengthRequired value: I32(411)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode411LengthRequired;

/// @brief Field k_EHTTPStatusCode412PreconditionFailed value: I32(412)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode412PreconditionFailed;

/// @brief Field k_EHTTPStatusCode413RequestEntityTooLarge value: I32(413)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode413RequestEntityTooLarge;

/// @brief Field k_EHTTPStatusCode414RequestURITooLong value: I32(414)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode414RequestURITooLong;

/// @brief Field k_EHTTPStatusCode415UnsupportedMediaType value: I32(415)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode415UnsupportedMediaType;

/// @brief Field k_EHTTPStatusCode416RequestedRangeNotSatisfiable value: I32(416)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode416RequestedRangeNotSatisfiable;

/// @brief Field k_EHTTPStatusCode417ExpectationFailed value: I32(417)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode417ExpectationFailed;

/// @brief Field k_EHTTPStatusCode429TooManyRequests value: I32(429)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode429TooManyRequests;

/// @brief Field k_EHTTPStatusCode444ConnectionClosed value: I32(444)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode444ConnectionClosed;

/// @brief Field k_EHTTPStatusCode4xxUnknown value: I32(418)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode4xxUnknown;

/// @brief Field k_EHTTPStatusCode500InternalServerError value: I32(500)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode500InternalServerError;

/// @brief Field k_EHTTPStatusCode501NotImplemented value: I32(501)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode501NotImplemented;

/// @brief Field k_EHTTPStatusCode502BadGateway value: I32(502)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode502BadGateway;

/// @brief Field k_EHTTPStatusCode503ServiceUnavailable value: I32(503)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode503ServiceUnavailable;

/// @brief Field k_EHTTPStatusCode504GatewayTimeout value: I32(504)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode504GatewayTimeout;

/// @brief Field k_EHTTPStatusCode505HTTPVersionNotSupported value: I32(505)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode505HTTPVersionNotSupported;

/// @brief Field k_EHTTPStatusCode5xxUnknown value: I32(599)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCode5xxUnknown;

/// @brief Field k_EHTTPStatusCodeInvalid value: I32(0)
static ::Steamworks::EHTTPStatusCode const k_EHTTPStatusCodeInvalid;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EHTTPStatusCode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EHTTPStatusCode) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
