#pragma once
// IWYU pragma private; include "Steamworks/ELobbyComparison.hpp"
#include "Steamworks/zzzz__ELobbyComparison_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ELobbyComparison::ELobbyComparison(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ELobbyComparison::ELobbyComparison()   {
}
constexpr ::Steamworks::ELobbyComparison  Steamworks::ELobbyComparison::k_ELobbyComparisonEqualToOrLessThan{static_cast<int32_t>(0xfffffffe)};
constexpr ::Steamworks::ELobbyComparison  Steamworks::ELobbyComparison::k_ELobbyComparisonLessThan{static_cast<int32_t>(0xffffffff)};
constexpr ::Steamworks::ELobbyComparison  Steamworks::ELobbyComparison::k_ELobbyComparisonEqual{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ELobbyComparison  Steamworks::ELobbyComparison::k_ELobbyComparisonGreaterThan{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ELobbyComparison  Steamworks::ELobbyComparison::k_ELobbyComparisonEqualToOrGreaterThan{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ELobbyComparison  Steamworks::ELobbyComparison::k_ELobbyComparisonNotEqual{static_cast<int32_t>(0x3)};
