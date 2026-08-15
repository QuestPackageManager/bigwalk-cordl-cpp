#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AntiCheatClientMode.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode::AntiCheatClientMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode::AntiCheatClientMode()   {
}
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode::ClientServer{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode  Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode::PeerToPeer{static_cast<int32_t>(0x2)};
