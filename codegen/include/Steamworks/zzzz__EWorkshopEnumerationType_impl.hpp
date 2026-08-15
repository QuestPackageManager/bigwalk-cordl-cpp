#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopEnumerationType.hpp"
#include "Steamworks/zzzz__EWorkshopEnumerationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EWorkshopEnumerationType::EWorkshopEnumerationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EWorkshopEnumerationType::EWorkshopEnumerationType()   {
}
constexpr ::Steamworks::EWorkshopEnumerationType  Steamworks::EWorkshopEnumerationType::k_EWorkshopEnumerationTypeRankedByVote{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EWorkshopEnumerationType  Steamworks::EWorkshopEnumerationType::k_EWorkshopEnumerationTypeRecent{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EWorkshopEnumerationType  Steamworks::EWorkshopEnumerationType::k_EWorkshopEnumerationTypeTrending{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EWorkshopEnumerationType  Steamworks::EWorkshopEnumerationType::k_EWorkshopEnumerationTypeFavoritesOfFriends{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EWorkshopEnumerationType  Steamworks::EWorkshopEnumerationType::k_EWorkshopEnumerationTypeVotedByFriends{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EWorkshopEnumerationType  Steamworks::EWorkshopEnumerationType::k_EWorkshopEnumerationTypeContentByFriends{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EWorkshopEnumerationType  Steamworks::EWorkshopEnumerationType::k_EWorkshopEnumerationTypeRecentFromFollowedUsers{static_cast<int32_t>(0x6)};
