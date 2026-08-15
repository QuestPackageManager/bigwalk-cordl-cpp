#pragma once
// IWYU pragma private; include "Steamworks/EChatRoomEnterResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EChatRoomEnterResponse)
// Forward declare root types
namespace Steamworks {
struct EChatRoomEnterResponse;
}
// Write type traits
MARK_VAL_T(::Steamworks::EChatRoomEnterResponse);
DEFINE_IL2CPP_CLASS(::Steamworks::EChatRoomEnterResponse, "Steamworks", "EChatRoomEnterResponse");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EChatRoomEnterResponse
struct CORDL_TYPE EChatRoomEnterResponse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EChatRoomEnterResponse_Unwrapped
enum struct __EChatRoomEnterResponse_Unwrapped : int32_t {
__E_k_EChatRoomEnterResponseSuccess = static_cast<int32_t>(0x1),
__E_k_EChatRoomEnterResponseDoesntExist = static_cast<int32_t>(0x2),
__E_k_EChatRoomEnterResponseNotAllowed = static_cast<int32_t>(0x3),
__E_k_EChatRoomEnterResponseFull = static_cast<int32_t>(0x4),
__E_k_EChatRoomEnterResponseError = static_cast<int32_t>(0x5),
__E_k_EChatRoomEnterResponseBanned = static_cast<int32_t>(0x6),
__E_k_EChatRoomEnterResponseLimited = static_cast<int32_t>(0x7),
__E_k_EChatRoomEnterResponseClanDisabled = static_cast<int32_t>(0x8),
__E_k_EChatRoomEnterResponseCommunityBan = static_cast<int32_t>(0x9),
__E_k_EChatRoomEnterResponseMemberBlockedYou = static_cast<int32_t>(0xa),
__E_k_EChatRoomEnterResponseYouBlockedMember = static_cast<int32_t>(0xb),
__E_k_EChatRoomEnterResponseRatelimitExceeded = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EChatRoomEnterResponse_Unwrapped () const noexcept {
return static_cast<__EChatRoomEnterResponse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EChatRoomEnterResponse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EChatRoomEnterResponse(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EChatRoomEnterResponseBanned value: I32(6)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseBanned;

/// @brief Field k_EChatRoomEnterResponseClanDisabled value: I32(8)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseClanDisabled;

/// @brief Field k_EChatRoomEnterResponseCommunityBan value: I32(9)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseCommunityBan;

/// @brief Field k_EChatRoomEnterResponseDoesntExist value: I32(2)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseDoesntExist;

/// @brief Field k_EChatRoomEnterResponseError value: I32(5)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseError;

/// @brief Field k_EChatRoomEnterResponseFull value: I32(4)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseFull;

/// @brief Field k_EChatRoomEnterResponseLimited value: I32(7)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseLimited;

/// @brief Field k_EChatRoomEnterResponseMemberBlockedYou value: I32(10)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseMemberBlockedYou;

/// @brief Field k_EChatRoomEnterResponseNotAllowed value: I32(3)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseNotAllowed;

/// @brief Field k_EChatRoomEnterResponseRatelimitExceeded value: I32(15)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseRatelimitExceeded;

/// @brief Field k_EChatRoomEnterResponseSuccess value: I32(1)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseSuccess;

/// @brief Field k_EChatRoomEnterResponseYouBlockedMember value: I32(11)
static ::Steamworks::EChatRoomEnterResponse const k_EChatRoomEnterResponseYouBlockedMember;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EChatRoomEnterResponse, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EChatRoomEnterResponse) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
