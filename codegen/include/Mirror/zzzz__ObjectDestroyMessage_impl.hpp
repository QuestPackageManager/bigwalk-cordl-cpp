#pragma once
// IWYU pragma private; include "Mirror/ObjectDestroyMessage.hpp"
#include "Mirror/zzzz__ObjectDestroyMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::ObjectDestroyMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::ObjectDestroyMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::ObjectDestroyMessage::ObjectDestroyMessage(uint32_t  netId) noexcept  {
this->netId = netId;
}
// Ctor Parameters []
constexpr ::Mirror::ObjectDestroyMessage::ObjectDestroyMessage()   {
}
