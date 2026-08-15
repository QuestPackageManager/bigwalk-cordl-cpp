#pragma once
// IWYU pragma private; include "Steamworks/EUserUGCList.hpp"
#include "Steamworks/zzzz__EUserUGCList_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EUserUGCList::EUserUGCList(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EUserUGCList::EUserUGCList()   {
}
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_Published{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_VotedOn{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_VotedUp{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_VotedDown{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_WillVoteLater{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_Favorited{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_Subscribed{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_UsedOrPlayed{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EUserUGCList  Steamworks::EUserUGCList::k_EUserUGCList_Followed{static_cast<int32_t>(0x8)};
