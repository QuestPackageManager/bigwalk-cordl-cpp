#pragma once
// IWYU pragma private; include "Steamworks/EChatEntryType.hpp"
#include "Steamworks/zzzz__EChatEntryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EChatEntryType::EChatEntryType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EChatEntryType::EChatEntryType()   {
}
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeChatMsg{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeTyping{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeInviteGame{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeEmote{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeLeftConversation{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeEntered{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeWasKicked{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeWasBanned{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeDisconnected{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeHistoricalChat{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::EChatEntryType  Steamworks::EChatEntryType::k_EChatEntryTypeLinkBlocked{static_cast<int32_t>(0xe)};
