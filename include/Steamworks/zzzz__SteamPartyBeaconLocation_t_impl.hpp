#pragma once
// IWYU pragma private; include "Steamworks/SteamPartyBeaconLocation_t.hpp"
#include "Steamworks/zzzz__ESteamPartyBeaconLocationType_impl.hpp"
#include "Steamworks/zzzz__SteamPartyBeaconLocation_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eType", ty: "::Steamworks::ESteamPartyBeaconLocationType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulLocationID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamPartyBeaconLocation_t::SteamPartyBeaconLocation_t(::Steamworks::ESteamPartyBeaconLocationType  m_eType, uint64_t  m_ulLocationID) noexcept  {
this->m_eType = m_eType;
this->m_ulLocationID = m_ulLocationID;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamPartyBeaconLocation_t::SteamPartyBeaconLocation_t()   {
}
