#pragma once
// IWYU pragma private; include "Mirror/PlayerSpawnMethod.hpp"
#include "Mirror/zzzz__PlayerSpawnMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::PlayerSpawnMethod::PlayerSpawnMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::PlayerSpawnMethod::PlayerSpawnMethod()   {
}
constexpr ::Mirror::PlayerSpawnMethod  Mirror::PlayerSpawnMethod::Random{static_cast<int32_t>(0x0)};
constexpr ::Mirror::PlayerSpawnMethod  Mirror::PlayerSpawnMethod::RoundRobin{static_cast<int32_t>(0x1)};
