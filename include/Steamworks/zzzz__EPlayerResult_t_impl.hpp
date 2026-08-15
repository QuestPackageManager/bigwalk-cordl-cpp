#pragma once
// IWYU pragma private; include "Steamworks/EPlayerResult_t.hpp"
#include "Steamworks/zzzz__EPlayerResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EPlayerResult_t::EPlayerResult_t(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EPlayerResult_t::EPlayerResult_t()   {
}
constexpr ::Steamworks::EPlayerResult_t  Steamworks::EPlayerResult_t::k_EPlayerResultFailedToConnect{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EPlayerResult_t  Steamworks::EPlayerResult_t::k_EPlayerResultAbandoned{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EPlayerResult_t  Steamworks::EPlayerResult_t::k_EPlayerResultKicked{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EPlayerResult_t  Steamworks::EPlayerResult_t::k_EPlayerResultIncomplete{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EPlayerResult_t  Steamworks::EPlayerResult_t::k_EPlayerResultCompleted{static_cast<int32_t>(0x5)};
