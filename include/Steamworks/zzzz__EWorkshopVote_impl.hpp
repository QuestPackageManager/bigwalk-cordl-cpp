#pragma once
// IWYU pragma private; include "Steamworks/EWorkshopVote.hpp"
#include "Steamworks/zzzz__EWorkshopVote_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EWorkshopVote::EWorkshopVote(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EWorkshopVote::EWorkshopVote()   {
}
constexpr ::Steamworks::EWorkshopVote  Steamworks::EWorkshopVote::k_EWorkshopVoteUnvoted{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EWorkshopVote  Steamworks::EWorkshopVote::k_EWorkshopVoteFor{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EWorkshopVote  Steamworks::EWorkshopVote::k_EWorkshopVoteAgainst{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EWorkshopVote  Steamworks::EWorkshopVote::k_EWorkshopVoteLater{static_cast<int32_t>(0x3)};
