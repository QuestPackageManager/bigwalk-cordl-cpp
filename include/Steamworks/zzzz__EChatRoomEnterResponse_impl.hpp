#pragma once
// IWYU pragma private; include "Steamworks/EChatRoomEnterResponse.hpp"
#include "Steamworks/zzzz__EChatRoomEnterResponse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EChatRoomEnterResponse::EChatRoomEnterResponse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EChatRoomEnterResponse::EChatRoomEnterResponse()   {
}
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseSuccess{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseDoesntExist{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseNotAllowed{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseFull{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseError{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseBanned{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseLimited{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseClanDisabled{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseCommunityBan{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseMemberBlockedYou{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseYouBlockedMember{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::EChatRoomEnterResponse  Steamworks::EChatRoomEnterResponse::k_EChatRoomEnterResponseRatelimitExceeded{static_cast<int32_t>(0xf)};
