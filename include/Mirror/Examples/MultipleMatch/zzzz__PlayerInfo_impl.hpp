#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/PlayerInfo.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__PlayerInfo_def.hpp"
// Ctor Parameters [CppParam { name: "playerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ready", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "matchId", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::MultipleMatch::PlayerInfo::PlayerInfo(int32_t  playerIndex, bool  ready, ::System::Guid  matchId) noexcept  {
this->playerIndex = playerIndex;
this->ready = ready;
this->matchId = matchId;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::PlayerInfo::PlayerInfo()   {
}
