#pragma once
// IWYU pragma private; include "Mirror/Examples/MultipleMatch/MatchPlayerData.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__CellValue_impl.hpp"
#include "Mirror/Examples/MultipleMatch/zzzz__MatchPlayerData_def.hpp"
// Ctor Parameters [CppParam { name: "playerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wins", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentScore", ty: "::Mirror::Examples::MultipleMatch::CellValue", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::MultipleMatch::MatchPlayerData::MatchPlayerData(int32_t  playerIndex, int32_t  wins, ::Mirror::Examples::MultipleMatch::CellValue  currentScore) noexcept  {
this->playerIndex = playerIndex;
this->wins = wins;
this->currentScore = currentScore;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::MultipleMatch::MatchPlayerData::MatchPlayerData()   {
}
