#pragma once
// IWYU pragma private; include "Steamworks/TimedTrialStatus_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__TimedTrialStatus_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_unAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bIsOffline", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unSecondsAllowed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unSecondsPlayed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::TimedTrialStatus_t::TimedTrialStatus_t(::Steamworks::AppId_t  m_unAppID, bool  m_bIsOffline, uint32_t  m_unSecondsAllowed, uint32_t  m_unSecondsPlayed) noexcept  {
this->m_unAppID = m_unAppID;
this->m_bIsOffline = m_bIsOffline;
this->m_unSecondsAllowed = m_unSecondsAllowed;
this->m_unSecondsPlayed = m_unSecondsPlayed;
}
// Ctor Parameters []
constexpr ::Steamworks::TimedTrialStatus_t::TimedTrialStatus_t()   {
}
