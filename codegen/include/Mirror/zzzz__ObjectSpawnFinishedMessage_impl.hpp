#pragma once
// IWYU pragma private; include "Mirror/ObjectSpawnFinishedMessage.hpp"
#include "Mirror/zzzz__ObjectSpawnFinishedMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::ObjectSpawnFinishedMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::ObjectSpawnFinishedMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::Mirror::ObjectSpawnFinishedMessage::ObjectSpawnFinishedMessage()   {
}
