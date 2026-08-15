#pragma once
// IWYU pragma private; include "Steamworks/EFriendRelationship.hpp"
#include "Steamworks/zzzz__EFriendRelationship_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EFriendRelationship::EFriendRelationship(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EFriendRelationship::EFriendRelationship()   {
}
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipBlocked{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipRequestRecipient{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipFriend{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipRequestInitiator{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipIgnored{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipIgnoredFriend{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipSuggested_DEPRECATED{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EFriendRelationship  Steamworks::EFriendRelationship::k_EFriendRelationshipMax{static_cast<int32_t>(0x8)};
