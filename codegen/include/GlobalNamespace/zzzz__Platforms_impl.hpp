#pragma once
// IWYU pragma private; include "GlobalNamespace/Platforms.hpp"
#include "GlobalNamespace/zzzz__Platforms_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Platforms::Platforms(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Platforms::Platforms()   {
}
constexpr ::GlobalNamespace::Platforms  GlobalNamespace::Platforms::None{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::Platforms  GlobalNamespace::Platforms::Steam{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::Platforms  GlobalNamespace::Platforms::PS5{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::Platforms  GlobalNamespace::Platforms::Switch2{static_cast<uint8_t>(0x4u)};
