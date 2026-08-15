#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputGlyphSize.hpp"
#include "Steamworks/zzzz__ESteamInputGlyphSize_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamInputGlyphSize::ESteamInputGlyphSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamInputGlyphSize::ESteamInputGlyphSize()   {
}
constexpr ::Steamworks::ESteamInputGlyphSize  Steamworks::ESteamInputGlyphSize::k_ESteamInputGlyphSize_Small{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamInputGlyphSize  Steamworks::ESteamInputGlyphSize::k_ESteamInputGlyphSize_Medium{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamInputGlyphSize  Steamworks::ESteamInputGlyphSize::k_ESteamInputGlyphSize_Large{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamInputGlyphSize  Steamworks::ESteamInputGlyphSize::k_ESteamInputGlyphSize_Count{static_cast<int32_t>(0x3)};
