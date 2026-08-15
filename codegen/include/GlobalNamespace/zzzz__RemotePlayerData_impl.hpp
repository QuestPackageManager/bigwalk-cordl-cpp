#pragma once
// IWYU pragma private; include "GlobalNamespace/RemotePlayerData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "GlobalNamespace/zzzz__RemotePlayerData_def.hpp"
// Ctor Parameters [CppParam { name: "PlayerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RemotePlayerData::RemotePlayerData(int32_t  PlayerIndex, ::Unity::Mathematics::float3  Position) noexcept  {
this->PlayerIndex = PlayerIndex;
this->Position = Position;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RemotePlayerData::RemotePlayerData()   {
}
