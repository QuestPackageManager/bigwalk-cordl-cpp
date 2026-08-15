#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/ServerMatchMessage.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__ServerMatchOperation_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__ServerMatchMessage_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Examples::MultipleMatch::ServerMatchMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Examples::MultipleMatch::ServerMatchMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "serverMatchOperation", ty: "::Mirror::Examples::MultipleMatch::ServerMatchOperation", modifiers: "", def_value: Some("{}") }, CppParam { name: "matchId", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchMessage::ServerMatchMessage(::Mirror::Examples::MultipleMatch::ServerMatchOperation  serverMatchOperation, ::System::Guid  matchId) noexcept  {
this->serverMatchOperation = serverMatchOperation;
this->matchId = matchId;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::ServerMatchMessage::ServerMatchMessage()   {
}
