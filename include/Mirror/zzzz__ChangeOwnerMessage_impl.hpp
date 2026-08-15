#pragma once
// IWYU pragma private; include "Mirror/ChangeOwnerMessage.hpp"
#include "Mirror/zzzz__ChangeOwnerMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::ChangeOwnerMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::ChangeOwnerMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOwner", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isLocalPlayer", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::ChangeOwnerMessage::ChangeOwnerMessage(uint32_t  netId, bool  isOwner, bool  isLocalPlayer) noexcept  {
this->netId = netId;
this->isOwner = isOwner;
this->isLocalPlayer = isLocalPlayer;
}
// Ctor Parameters []
constexpr ::Mirror::ChangeOwnerMessage::ChangeOwnerMessage()   {
}
