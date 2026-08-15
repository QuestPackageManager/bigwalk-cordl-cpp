#pragma once
// IWYU pragma private; include "Steamworks/ESteamInputGlyphStyle.hpp"
#include "Steamworks/zzzz__ESteamInputGlyphStyle_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESteamInputGlyphStyle::ESteamInputGlyphStyle(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESteamInputGlyphStyle::ESteamInputGlyphStyle()   {
}
constexpr ::Steamworks::ESteamInputGlyphStyle  Steamworks::ESteamInputGlyphStyle::ESteamInputGlyphStyle_Knockout{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESteamInputGlyphStyle  Steamworks::ESteamInputGlyphStyle::ESteamInputGlyphStyle_Light{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESteamInputGlyphStyle  Steamworks::ESteamInputGlyphStyle::ESteamInputGlyphStyle_Dark{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ESteamInputGlyphStyle  Steamworks::ESteamInputGlyphStyle::ESteamInputGlyphStyle_NeutralColorABXY{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::ESteamInputGlyphStyle  Steamworks::ESteamInputGlyphStyle::ESteamInputGlyphStyle_SolidABXY{static_cast<int32_t>(0x20)};
