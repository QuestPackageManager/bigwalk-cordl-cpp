#pragma once
// IWYU pragma private; include "Shipmate/Porting/ELeaderboardType.hpp"
#include "Shipmate/Porting/zzzz__ELeaderboardType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Shipmate::Porting::ELeaderboardType::ELeaderboardType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::ELeaderboardType::ELeaderboardType()   {
}
constexpr ::Shipmate::Porting::ELeaderboardType  Shipmate::Porting::ELeaderboardType::World{static_cast<int32_t>(0x0)};
constexpr ::Shipmate::Porting::ELeaderboardType  Shipmate::Porting::ELeaderboardType::Friends{static_cast<int32_t>(0x1)};
