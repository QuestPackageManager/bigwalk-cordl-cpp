#pragma once
// IWYU pragma private; include "Steamworks/EFriendFlags.hpp"
#include "Steamworks/zzzz__EFriendFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EFriendFlags::EFriendFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EFriendFlags::EFriendFlags()   {
}
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagBlocked{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagFriendshipRequested{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagImmediate{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagClanMember{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagOnGameServer{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagRequestingFriendship{static_cast<int32_t>(0x80)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagRequestingInfo{static_cast<int32_t>(0x100)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagIgnored{static_cast<int32_t>(0x200)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagIgnoredFriend{static_cast<int32_t>(0x400)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagChatMember{static_cast<int32_t>(0x1000)};
constexpr ::Steamworks::EFriendFlags  Steamworks::EFriendFlags::k_EFriendFlagAll{static_cast<int32_t>(0xffff)};
