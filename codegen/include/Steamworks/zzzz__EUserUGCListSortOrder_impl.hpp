#pragma once
// IWYU pragma private; include "Steamworks/EUserUGCListSortOrder.hpp"
#include "Steamworks/zzzz__EUserUGCListSortOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EUserUGCListSortOrder::EUserUGCListSortOrder(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EUserUGCListSortOrder::EUserUGCListSortOrder()   {
}
constexpr ::Steamworks::EUserUGCListSortOrder  Steamworks::EUserUGCListSortOrder::k_EUserUGCListSortOrder_CreationOrderDesc{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EUserUGCListSortOrder  Steamworks::EUserUGCListSortOrder::k_EUserUGCListSortOrder_CreationOrderAsc{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EUserUGCListSortOrder  Steamworks::EUserUGCListSortOrder::k_EUserUGCListSortOrder_TitleAsc{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EUserUGCListSortOrder  Steamworks::EUserUGCListSortOrder::k_EUserUGCListSortOrder_LastUpdatedDesc{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EUserUGCListSortOrder  Steamworks::EUserUGCListSortOrder::k_EUserUGCListSortOrder_SubscriptionDateDesc{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EUserUGCListSortOrder  Steamworks::EUserUGCListSortOrder::k_EUserUGCListSortOrder_VoteScoreDesc{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EUserUGCListSortOrder  Steamworks::EUserUGCListSortOrder::k_EUserUGCListSortOrder_ForModeration{static_cast<int32_t>(0x6)};
