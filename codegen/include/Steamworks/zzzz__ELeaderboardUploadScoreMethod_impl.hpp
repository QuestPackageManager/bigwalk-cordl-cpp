#pragma once
// IWYU pragma private; include "Steamworks/ELeaderboardUploadScoreMethod.hpp"
#include "Steamworks/zzzz__ELeaderboardUploadScoreMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ELeaderboardUploadScoreMethod::ELeaderboardUploadScoreMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ELeaderboardUploadScoreMethod::ELeaderboardUploadScoreMethod()   {
}
constexpr ::Steamworks::ELeaderboardUploadScoreMethod  Steamworks::ELeaderboardUploadScoreMethod::k_ELeaderboardUploadScoreMethodNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ELeaderboardUploadScoreMethod  Steamworks::ELeaderboardUploadScoreMethod::k_ELeaderboardUploadScoreMethodKeepBest{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ELeaderboardUploadScoreMethod  Steamworks::ELeaderboardUploadScoreMethod::k_ELeaderboardUploadScoreMethodForceUpdate{static_cast<int32_t>(0x2)};
