#pragma once
// IWYU pragma private; include "Steamworks/MarketEligibilityResponse_t.hpp"
#include "Steamworks/zzzz__EMarketNotAllowedReasonFlags_impl.hpp"
#include "Steamworks/zzzz__RTime32_impl.hpp"
#include "Steamworks/zzzz__MarketEligibilityResponse_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_bAllowed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eNotAllowedReason", ty: "::Steamworks::EMarketNotAllowedReasonFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rtAllowedAtTime", ty: "::Steamworks::RTime32", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cdaySteamGuardRequiredDays", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cdayNewDeviceCooldown", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::MarketEligibilityResponse_t::MarketEligibilityResponse_t(bool  m_bAllowed, ::Steamworks::EMarketNotAllowedReasonFlags  m_eNotAllowedReason, ::Steamworks::RTime32  m_rtAllowedAtTime, int32_t  m_cdaySteamGuardRequiredDays, int32_t  m_cdayNewDeviceCooldown) noexcept  {
this->m_bAllowed = m_bAllowed;
this->m_eNotAllowedReason = m_eNotAllowedReason;
this->m_rtAllowedAtTime = m_rtAllowedAtTime;
this->m_cdaySteamGuardRequiredDays = m_cdaySteamGuardRequiredDays;
this->m_cdayNewDeviceCooldown = m_cdayNewDeviceCooldown;
}
// Ctor Parameters []
constexpr ::Steamworks::MarketEligibilityResponse_t::MarketEligibilityResponse_t()   {
}
