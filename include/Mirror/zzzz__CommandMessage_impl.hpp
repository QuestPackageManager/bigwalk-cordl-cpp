#pragma once
// IWYU pragma private; include "Mirror/CommandMessage.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Mirror/zzzz__CommandMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::CommandMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::CommandMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "componentIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "functionHash", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::CommandMessage::CommandMessage(uint32_t  netId, uint8_t  componentIndex, uint16_t  functionHash, ::System::ArraySegment_1<uint8_t>  payload) noexcept  {
this->netId = netId;
this->componentIndex = componentIndex;
this->functionHash = functionHash;
this->payload = payload;
}
// Ctor Parameters []
constexpr ::Mirror::CommandMessage::CommandMessage()   {
}
