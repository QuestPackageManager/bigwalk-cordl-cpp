#pragma once
// IWYU pragma private; include "Steamworks/PlayerAcceptState_t.hpp"
#include "Steamworks/zzzz__PlayerAcceptState_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::PlayerAcceptState_t::PlayerAcceptState_t(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::PlayerAcceptState_t::PlayerAcceptState_t()   {
}
constexpr ::Steamworks::PlayerAcceptState_t  Steamworks::PlayerAcceptState_t::k_EStateUnknown{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::PlayerAcceptState_t  Steamworks::PlayerAcceptState_t::k_EStatePlayerAccepted{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::PlayerAcceptState_t  Steamworks::PlayerAcceptState_t::k_EStatePlayerDeclined{static_cast<int32_t>(0x2)};
