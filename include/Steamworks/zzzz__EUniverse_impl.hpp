#pragma once
// IWYU pragma private; include "Steamworks/EUniverse.hpp"
#include "Steamworks/zzzz__EUniverse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EUniverse::EUniverse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EUniverse::EUniverse()   {
}
constexpr ::Steamworks::EUniverse  Steamworks::EUniverse::k_EUniverseInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EUniverse  Steamworks::EUniverse::k_EUniversePublic{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EUniverse  Steamworks::EUniverse::k_EUniverseBeta{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EUniverse  Steamworks::EUniverse::k_EUniverseInternal{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EUniverse  Steamworks::EUniverse::k_EUniverseDev{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EUniverse  Steamworks::EUniverse::k_EUniverseMax{static_cast<int32_t>(0x5)};
