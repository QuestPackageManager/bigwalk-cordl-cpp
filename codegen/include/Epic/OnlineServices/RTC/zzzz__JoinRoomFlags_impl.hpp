#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/JoinRoomFlags.hpp"
#include "Epic/OnlineServices/RTC/zzzz__JoinRoomFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::RTC::JoinRoomFlags::JoinRoomFlags(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::JoinRoomFlags::JoinRoomFlags()   {
}
constexpr ::Epic::OnlineServices::RTC::JoinRoomFlags  Epic::OnlineServices::RTC::JoinRoomFlags::None{static_cast<uint32_t>(0x0u)};
constexpr ::Epic::OnlineServices::RTC::JoinRoomFlags  Epic::OnlineServices::RTC::JoinRoomFlags::EnableEcho{static_cast<uint32_t>(0x1u)};
constexpr ::Epic::OnlineServices::RTC::JoinRoomFlags  Epic::OnlineServices::RTC::JoinRoomFlags::EnableDatachannel{static_cast<uint32_t>(0x4u)};
constexpr ::Epic::OnlineServices::RTC::JoinRoomFlags  Epic::OnlineServices::RTC::JoinRoomFlags::ReservedVoiceFeature{static_cast<uint32_t>(0x8u)};
