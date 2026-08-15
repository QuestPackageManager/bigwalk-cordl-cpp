#pragma once
// IWYU pragma private; include "Mirror/RpcBufferMessage.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Mirror/zzzz__RpcBufferMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::RpcBufferMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::RpcBufferMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "payload", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::RpcBufferMessage::RpcBufferMessage(::System::ArraySegment_1<uint8_t>  payload) noexcept  {
this->payload = payload;
}
// Ctor Parameters []
constexpr ::Mirror::RpcBufferMessage::RpcBufferMessage()   {
}
