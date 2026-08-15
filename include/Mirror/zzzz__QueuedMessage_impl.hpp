#pragma once
// IWYU pragma private; include "Mirror/QueuedMessage.hpp"
#include "Mirror/zzzz__QueuedMessage_def.hpp"
// Ctor Parameters [CppParam { name: "connectionId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::QueuedMessage::QueuedMessage(int32_t  connectionId, ::ArrayW<uint8_t>  bytes, double_t  time) noexcept  {
this->connectionId = connectionId;
this->bytes = bytes;
this->time = time;
}
// Ctor Parameters []
constexpr ::Mirror::QueuedMessage::QueuedMessage()   {
}
