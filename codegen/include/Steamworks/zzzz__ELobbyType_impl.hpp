#pragma once
// IWYU pragma private; include "Steamworks/ELobbyType.hpp"
#include "Steamworks/zzzz__ELobbyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ELobbyType::ELobbyType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ELobbyType::ELobbyType()   {
}
constexpr ::Steamworks::ELobbyType  Steamworks::ELobbyType::k_ELobbyTypePrivate{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ELobbyType  Steamworks::ELobbyType::k_ELobbyTypeFriendsOnly{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ELobbyType  Steamworks::ELobbyType::k_ELobbyTypePublic{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ELobbyType  Steamworks::ELobbyType::k_ELobbyTypeInvisible{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ELobbyType  Steamworks::ELobbyType::k_ELobbyTypePrivateUnique{static_cast<int32_t>(0x4)};
