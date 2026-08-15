#pragma once
// IWYU pragma private; include "Steamworks/ELeaderboardSortMethod.hpp"
#include "Steamworks/zzzz__ELeaderboardSortMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ELeaderboardSortMethod::ELeaderboardSortMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ELeaderboardSortMethod::ELeaderboardSortMethod()   {
}
constexpr ::Steamworks::ELeaderboardSortMethod  Steamworks::ELeaderboardSortMethod::k_ELeaderboardSortMethodNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ELeaderboardSortMethod  Steamworks::ELeaderboardSortMethod::k_ELeaderboardSortMethodAscending{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ELeaderboardSortMethod  Steamworks::ELeaderboardSortMethod::k_ELeaderboardSortMethodDescending{static_cast<int32_t>(0x2)};
