#pragma once
// IWYU pragma private; include "Steamworks/SubmitItemUpdateResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__SubmitItemUpdateResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bUserNeedsToAcceptWorkshopLegalAgreement", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SubmitItemUpdateResult_t::SubmitItemUpdateResult_t(::Steamworks::EResult  m_eResult, bool  m_bUserNeedsToAcceptWorkshopLegalAgreement, ::Steamworks::PublishedFileId_t  m_nPublishedFileId) noexcept  {
this->m_eResult = m_eResult;
this->m_bUserNeedsToAcceptWorkshopLegalAgreement = m_bUserNeedsToAcceptWorkshopLegalAgreement;
this->m_nPublishedFileId = m_nPublishedFileId;
}
// Ctor Parameters []
constexpr ::Steamworks::SubmitItemUpdateResult_t::SubmitItemUpdateResult_t()   {
}
