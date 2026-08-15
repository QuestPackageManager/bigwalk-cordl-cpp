#pragma once
// IWYU pragma private; include "Mirror/SpawnMessage.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/zzzz__SpawnMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::SpawnMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::SpawnMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "netId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isLocalPlayer", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isOwner", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sceneId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "assetId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SpawnMessage::SpawnMessage(uint32_t  netId, bool  isLocalPlayer, bool  isOwner, uint64_t  sceneId, uint32_t  assetId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, ::System::ArraySegment_1<uint8_t>  payload) noexcept  {
this->netId = netId;
this->isLocalPlayer = isLocalPlayer;
this->isOwner = isOwner;
this->sceneId = sceneId;
this->assetId = assetId;
this->position = position;
this->rotation = rotation;
this->scale = scale;
this->payload = payload;
}
// Ctor Parameters []
constexpr ::Mirror::SpawnMessage::SpawnMessage()   {
}
