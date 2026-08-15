#pragma once
// IWYU pragma private; include "Steamworks/ERemoteStoragePublishedFileVisibility.hpp"
#include "Steamworks/zzzz__ERemoteStoragePublishedFileVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ERemoteStoragePublishedFileVisibility::ERemoteStoragePublishedFileVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ERemoteStoragePublishedFileVisibility::ERemoteStoragePublishedFileVisibility()   {
}
constexpr ::Steamworks::ERemoteStoragePublishedFileVisibility  Steamworks::ERemoteStoragePublishedFileVisibility::k_ERemoteStoragePublishedFileVisibilityPublic{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ERemoteStoragePublishedFileVisibility  Steamworks::ERemoteStoragePublishedFileVisibility::k_ERemoteStoragePublishedFileVisibilityFriendsOnly{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ERemoteStoragePublishedFileVisibility  Steamworks::ERemoteStoragePublishedFileVisibility::k_ERemoteStoragePublishedFileVisibilityPrivate{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ERemoteStoragePublishedFileVisibility  Steamworks::ERemoteStoragePublishedFileVisibility::k_ERemoteStoragePublishedFileVisibilityUnlisted{static_cast<int32_t>(0x3)};
