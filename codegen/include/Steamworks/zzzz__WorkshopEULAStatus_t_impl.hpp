#pragma once
// IWYU pragma private; include "Steamworks/WorkshopEULAStatus_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__RTime32_impl.hpp"
#include "Steamworks/zzzz__WorkshopEULAStatus_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unVersion", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rtAction", ty: "::Steamworks::RTime32", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bAccepted", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bNeedsAction", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::WorkshopEULAStatus_t::WorkshopEULAStatus_t(::Steamworks::EResult  m_eResult, ::Steamworks::AppId_t  m_nAppID, uint32_t  m_unVersion, ::Steamworks::RTime32  m_rtAction, bool  m_bAccepted, bool  m_bNeedsAction) noexcept  {
this->m_eResult = m_eResult;
this->m_nAppID = m_nAppID;
this->m_unVersion = m_unVersion;
this->m_rtAction = m_rtAction;
this->m_bAccepted = m_bAccepted;
this->m_bNeedsAction = m_bNeedsAction;
}
// Ctor Parameters []
constexpr ::Steamworks::WorkshopEULAStatus_t::WorkshopEULAStatus_t()   {
}
