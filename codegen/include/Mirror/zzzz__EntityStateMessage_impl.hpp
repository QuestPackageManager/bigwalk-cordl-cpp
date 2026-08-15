#pragma once
// IWYU pragma private; include "Mirror/EntityStateMessage.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Mirror/zzzz__EntityStateMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::EntityStateMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::EntityStateMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::EntityStateMessage::EntityStateMessage(uint32_t  netId, ::System::ArraySegment_1<uint8_t>  payload) noexcept  {
this->netId = netId;
this->payload = payload;
}
// Ctor Parameters []
constexpr ::Mirror::EntityStateMessage::EntityStateMessage()   {
}
