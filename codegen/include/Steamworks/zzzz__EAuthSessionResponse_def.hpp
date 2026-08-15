#pragma once
// IWYU pragma private; include "Steamworks/EAuthSessionResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EAuthSessionResponse)
// Forward declare root types
namespace Steamworks {
struct EAuthSessionResponse;
}
// Write type traits
MARK_VAL_T(::Steamworks::EAuthSessionResponse);
DEFINE_IL2CPP_CLASS(::Steamworks::EAuthSessionResponse, "Steamworks", "EAuthSessionResponse");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EAuthSessionResponse
struct CORDL_TYPE EAuthSessionResponse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EAuthSessionResponse_Unwrapped
enum struct __EAuthSessionResponse_Unwrapped : int32_t {
__E_k_EAuthSessionResponseOK = static_cast<int32_t>(0x0),
__E_k_EAuthSessionResponseUserNotConnectedToSteam = static_cast<int32_t>(0x1),
__E_k_EAuthSessionResponseNoLicenseOrExpired = static_cast<int32_t>(0x2),
__E_k_EAuthSessionResponseVACBanned = static_cast<int32_t>(0x3),
__E_k_EAuthSessionResponseLoggedInElseWhere = static_cast<int32_t>(0x4),
__E_k_EAuthSessionResponseVACCheckTimedOut = static_cast<int32_t>(0x5),
__E_k_EAuthSessionResponseAuthTicketCanceled = static_cast<int32_t>(0x6),
__E_k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed = static_cast<int32_t>(0x7),
__E_k_EAuthSessionResponseAuthTicketInvalid = static_cast<int32_t>(0x8),
__E_k_EAuthSessionResponsePublisherIssuedBan = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EAuthSessionResponse_Unwrapped () const noexcept {
return static_cast<__EAuthSessionResponse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EAuthSessionResponse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EAuthSessionResponse(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EAuthSessionResponseAuthTicketCanceled value: I32(6)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseAuthTicketCanceled;

/// @brief Field k_EAuthSessionResponseAuthTicketInvalid value: I32(8)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseAuthTicketInvalid;

/// @brief Field k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed value: I32(7)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed;

/// @brief Field k_EAuthSessionResponseLoggedInElseWhere value: I32(4)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseLoggedInElseWhere;

/// @brief Field k_EAuthSessionResponseNoLicenseOrExpired value: I32(2)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseNoLicenseOrExpired;

/// @brief Field k_EAuthSessionResponseOK value: I32(0)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseOK;

/// @brief Field k_EAuthSessionResponsePublisherIssuedBan value: I32(9)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponsePublisherIssuedBan;

/// @brief Field k_EAuthSessionResponseUserNotConnectedToSteam value: I32(1)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseUserNotConnectedToSteam;

/// @brief Field k_EAuthSessionResponseVACBanned value: I32(3)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseVACBanned;

/// @brief Field k_EAuthSessionResponseVACCheckTimedOut value: I32(5)
static ::Steamworks::EAuthSessionResponse const k_EAuthSessionResponseVACCheckTimedOut;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EAuthSessionResponse, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EAuthSessionResponse) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
