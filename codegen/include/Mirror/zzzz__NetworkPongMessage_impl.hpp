#pragma once
// IWYU pragma private; include "Mirror/NetworkPongMessage.hpp"
#include "Mirror/zzzz__NetworkPongMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::NetworkPongMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::NetworkPongMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "clientTime", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::NetworkPongMessage::NetworkPongMessage(double_t  clientTime) noexcept  {
this->clientTime = clientTime;
}
// Ctor Parameters []
constexpr ::Mirror::NetworkPongMessage::NetworkPongMessage()   {
}
