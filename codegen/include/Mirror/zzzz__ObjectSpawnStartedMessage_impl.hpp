#pragma once
// IWYU pragma private; include "Mirror/ObjectSpawnStartedMessage.hpp"
#include "Mirror/zzzz__ObjectSpawnStartedMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::ObjectSpawnStartedMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::ObjectSpawnStartedMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Mirror::ObjectSpawnStartedMessage::ObjectSpawnStartedMessage()   {
}
