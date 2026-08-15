#pragma once
// IWYU pragma private; include "Steamworks/ELobbyDistanceFilter.hpp"
#include "Steamworks/zzzz__ELobbyDistanceFilter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ELobbyDistanceFilter::ELobbyDistanceFilter(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ELobbyDistanceFilter::ELobbyDistanceFilter()   {
}
constexpr ::Steamworks::ELobbyDistanceFilter  Steamworks::ELobbyDistanceFilter::k_ELobbyDistanceFilterClose{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ELobbyDistanceFilter  Steamworks::ELobbyDistanceFilter::k_ELobbyDistanceFilterDefault{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ELobbyDistanceFilter  Steamworks::ELobbyDistanceFilter::k_ELobbyDistanceFilterFar{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ELobbyDistanceFilter  Steamworks::ELobbyDistanceFilter::k_ELobbyDistanceFilterWorldwide{static_cast<int32_t>(0x3)};
