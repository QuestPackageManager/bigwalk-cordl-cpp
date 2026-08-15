#pragma once
// IWYU pragma private; include "Steamworks/CreateBeaconCallback_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PartyBeaconID_t_impl.hpp"
#include "Steamworks/zzzz__CreateBeaconCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulBeaconID", ty: "::Steamworks::PartyBeaconID_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::CreateBeaconCallback_t::CreateBeaconCallback_t(::Steamworks::EResult  m_eResult, ::Steamworks::PartyBeaconID_t  m_ulBeaconID) noexcept  {
this->m_eResult = m_eResult;
this->m_ulBeaconID = m_ulBeaconID;
}
// Ctor Parameters []
constexpr ::Steamworks::CreateBeaconCallback_t::CreateBeaconCallback_t()   {
}
