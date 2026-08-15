#pragma once
// IWYU pragma private; include "Mirror/SceneMessage.hpp"
#include "Mirror/zzzz__SceneOperation_impl.hpp"
#include "Mirror/zzzz__SceneMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::SceneMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::SceneMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "sceneName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "sceneOperation", ty: "::Mirror::SceneOperation", modifiers: "", def_value: Some("{}") }, CppParam { name: "customHandling", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SceneMessage::SceneMessage(::StringW  sceneName, ::Mirror::SceneOperation  sceneOperation, bool  customHandling) noexcept  {
this->sceneName = sceneName;
this->sceneOperation = sceneOperation;
this->customHandling = customHandling;
}
// Ctor Parameters []
constexpr ::Mirror::SceneMessage::SceneMessage()   {
}
