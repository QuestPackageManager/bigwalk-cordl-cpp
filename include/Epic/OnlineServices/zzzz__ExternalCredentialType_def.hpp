#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ExternalCredentialType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalCredentialType)
// Forward declare root types
namespace Epic::OnlineServices {
struct ExternalCredentialType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::ExternalCredentialType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ExternalCredentialType, "Epic.OnlineServices", "ExternalCredentialType");
// Dependencies 
namespace Epic::OnlineServices {
// Is value type: true
// CS Name: Epic.OnlineServices.ExternalCredentialType
struct CORDL_TYPE ExternalCredentialType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExternalCredentialType_Unwrapped
enum struct __ExternalCredentialType_Unwrapped : int32_t {
__E_Epic = static_cast<int32_t>(0x0),
__E_SteamAppTicket = static_cast<int32_t>(0x1),
__E_PsnIdToken = static_cast<int32_t>(0x2),
__E_XblXstsToken = static_cast<int32_t>(0x3),
__E_DiscordAccessToken = static_cast<int32_t>(0x4),
__E_GogSessionTicket = static_cast<int32_t>(0x5),
__E_NintendoIdToken = static_cast<int32_t>(0x6),
__E_NintendoNsaIdToken = static_cast<int32_t>(0x7),
__E_UplayAccessToken = static_cast<int32_t>(0x8),
__E_OpenidAccessToken = static_cast<int32_t>(0x9),
__E_DeviceidAccessToken = static_cast<int32_t>(0xa),
__E_AppleIdToken = static_cast<int32_t>(0xb),
__E_GoogleIdToken = static_cast<int32_t>(0xc),
__E_OculusUseridNonce = static_cast<int32_t>(0xd),
__E_ItchioJwt = static_cast<int32_t>(0xe),
__E_ItchioKey = static_cast<int32_t>(0xf),
__E_EpicIdToken = static_cast<int32_t>(0x10),
__E_AmazonAccessToken = static_cast<int32_t>(0x11),
__E_SteamSessionTicket = static_cast<int32_t>(0x12),
__E_ViveportUserToken = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExternalCredentialType_Unwrapped () const noexcept {
return static_cast<__ExternalCredentialType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExternalCredentialType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExternalCredentialType(int32_t  value__) noexcept;

/// @brief Field AmazonAccessToken value: I32(17)
static ::Epic::OnlineServices::ExternalCredentialType const AmazonAccessToken;

/// @brief Field AppleIdToken value: I32(11)
static ::Epic::OnlineServices::ExternalCredentialType const AppleIdToken;

/// @brief Field DeviceidAccessToken value: I32(10)
static ::Epic::OnlineServices::ExternalCredentialType const DeviceidAccessToken;

/// @brief Field DiscordAccessToken value: I32(4)
static ::Epic::OnlineServices::ExternalCredentialType const DiscordAccessToken;

/// @brief Field Epic value: I32(0)
static ::Epic::OnlineServices::ExternalCredentialType const Epic;

/// @brief Field EpicIdToken value: I32(16)
static ::Epic::OnlineServices::ExternalCredentialType const EpicIdToken;

/// @brief Field GogSessionTicket value: I32(5)
static ::Epic::OnlineServices::ExternalCredentialType const GogSessionTicket;

/// @brief Field GoogleIdToken value: I32(12)
static ::Epic::OnlineServices::ExternalCredentialType const GoogleIdToken;

/// @brief Field ItchioJwt value: I32(14)
static ::Epic::OnlineServices::ExternalCredentialType const ItchioJwt;

/// @brief Field ItchioKey value: I32(15)
static ::Epic::OnlineServices::ExternalCredentialType const ItchioKey;

/// @brief Field NintendoIdToken value: I32(6)
static ::Epic::OnlineServices::ExternalCredentialType const NintendoIdToken;

/// @brief Field NintendoNsaIdToken value: I32(7)
static ::Epic::OnlineServices::ExternalCredentialType const NintendoNsaIdToken;

/// @brief Field OculusUseridNonce value: I32(13)
static ::Epic::OnlineServices::ExternalCredentialType const OculusUseridNonce;

/// @brief Field OpenidAccessToken value: I32(9)
static ::Epic::OnlineServices::ExternalCredentialType const OpenidAccessToken;

/// @brief Field PsnIdToken value: I32(2)
static ::Epic::OnlineServices::ExternalCredentialType const PsnIdToken;

/// @brief Field SteamAppTicket value: I32(1)
static ::Epic::OnlineServices::ExternalCredentialType const SteamAppTicket;

/// @brief Field SteamSessionTicket value: I32(18)
static ::Epic::OnlineServices::ExternalCredentialType const SteamSessionTicket;

/// @brief Field UplayAccessToken value: I32(8)
static ::Epic::OnlineServices::ExternalCredentialType const UplayAccessToken;

/// @brief Field ViveportUserToken value: I32(19)
static ::Epic::OnlineServices::ExternalCredentialType const ViveportUserToken;

/// @brief Field XblXstsToken value: I32(3)
static ::Epic::OnlineServices::ExternalCredentialType const XblXstsToken;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7450};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::ExternalCredentialType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::ExternalCredentialType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices
