#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/ClientMatchMessage.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__ClientMatchOperation_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchInfo_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__PlayerInfo_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__ClientMatchMessage_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchInfo_def.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__PlayerInfo_def.hpp"
#include "Mirror/zzzz__NetworkMessage_def.hpp"
/// @brief Convert operator to "::Mirror::NetworkMessage"
constexpr  Mirror::Examples::MultipleMatch::ClientMatchMessage::operator ::Mirror::NetworkMessage*()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Mirror::NetworkMessage"
constexpr ::Mirror::NetworkMessage* Mirror::Examples::MultipleMatch::ClientMatchMessage::i___Mirror__NetworkMessage()  {
return static_cast<::Mirror::NetworkMessage*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "clientMatchOperation", ty: "::Mirror::Examples::MultipleMatch::ClientMatchOperation", modifiers: "", def_value: Some("{}") }, CppParam { name: "matchId", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "matchInfos", ty: "::ArrayW<::Mirror::Examples::MultipleMatch::MatchInfo>", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerInfos", ty: "::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchMessage::ClientMatchMessage(::Mirror::Examples::MultipleMatch::ClientMatchOperation  clientMatchOperation, ::System::Guid  matchId, ::ArrayW<::Mirror::Examples::MultipleMatch::MatchInfo>  matchInfos, ::ArrayW<::Mirror::Examples::MultipleMatch::PlayerInfo>  playerInfos) noexcept  {
this->clientMatchOperation = clientMatchOperation;
this->matchId = matchId;
this->matchInfos = matchInfos;
this->playerInfos = playerInfos;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::ClientMatchMessage::ClientMatchMessage()   {
}
