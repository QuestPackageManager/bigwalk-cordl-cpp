#pragma once
// IWYU pragma private; include "Steamworks/ReservationNotificationCallback_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__PartyBeaconID_t_impl.hpp"
#include "Steamworks/zzzz__ReservationNotificationCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulBeaconID", ty: "::Steamworks::PartyBeaconID_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDJoiner", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ReservationNotificationCallback_t::ReservationNotificationCallback_t(::Steamworks::PartyBeaconID_t  m_ulBeaconID, ::Steamworks::CSteamID  m_steamIDJoiner) noexcept  {
this->m_ulBeaconID = m_ulBeaconID;
this->m_steamIDJoiner = m_steamIDJoiner;
}
// Ctor Parameters []
constexpr ::Steamworks::ReservationNotificationCallback_t::ReservationNotificationCallback_t()   {
}
