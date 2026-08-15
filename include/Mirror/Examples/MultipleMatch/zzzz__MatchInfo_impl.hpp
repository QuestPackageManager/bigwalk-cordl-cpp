#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/MatchInfo.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchInfo_def.hpp"
// Ctor Parameters [CppParam { name: "matchId", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "players", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxPlayers", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::MultipleMatch::MatchInfo::MatchInfo(::System::Guid  matchId, uint8_t  players, uint8_t  maxPlayers) noexcept  {
this->matchId = matchId;
this->players = players;
this->maxPlayers = maxPlayers;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::MatchInfo::MatchInfo()   {
}
