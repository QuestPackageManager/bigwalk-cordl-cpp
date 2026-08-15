#pragma once
// IWYU pragma private; include "Steamworks/EPersonaChange.hpp"
#include "Steamworks/zzzz__EPersonaChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EPersonaChange::EPersonaChange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EPersonaChange::EPersonaChange()   {
}
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeName{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeStatus{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeComeOnline{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeGoneOffline{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeGamePlayed{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeGameServer{static_cast<int32_t>(0x20)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeAvatar{static_cast<int32_t>(0x40)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeJoinedSource{static_cast<int32_t>(0x80)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeLeftSource{static_cast<int32_t>(0x100)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeRelationshipChanged{static_cast<int32_t>(0x200)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeNameFirstSet{static_cast<int32_t>(0x400)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeBroadcast{static_cast<int32_t>(0x800)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeNickname{static_cast<int32_t>(0x1000)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeSteamLevel{static_cast<int32_t>(0x2000)};
constexpr ::Steamworks::EPersonaChange  Steamworks::EPersonaChange::k_EPersonaChangeRichPresence{static_cast<int32_t>(0x4000)};
