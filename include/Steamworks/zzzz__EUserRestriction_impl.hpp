#pragma once
// IWYU pragma private; include "Steamworks/EUserRestriction.hpp"
#include "Steamworks/zzzz__EUserRestriction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EUserRestriction::EUserRestriction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EUserRestriction::EUserRestriction()   {
}
constexpr ::Steamworks::EUserRestriction  Steamworks::EUserRestriction::k_nUserRestrictionNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EUserRestriction  Steamworks::EUserRestriction::k_nUserRestrictionUnknown{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EUserRestriction  Steamworks::EUserRestriction::k_nUserRestrictionAnyChat{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EUserRestriction  Steamworks::EUserRestriction::k_nUserRestrictionVoiceChat{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EUserRestriction  Steamworks::EUserRestriction::k_nUserRestrictionGroupChat{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EUserRestriction  Steamworks::EUserRestriction::k_nUserRestrictionRating{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::EUserRestriction  Steamworks::EUserRestriction::k_nUserRestrictionGameInvites{static_cast<int32_t>(0x20)};
constexpr ::Steamworks::EUserRestriction  Steamworks::EUserRestriction::k_nUserRestrictionTrading{static_cast<int32_t>(0x40)};
