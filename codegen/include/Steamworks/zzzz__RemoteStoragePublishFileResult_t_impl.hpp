#pragma once
// IWYU pragma private; include "Steamworks/RemoteStoragePublishFileResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStoragePublishFileResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bUserNeedsToAcceptWorkshopLegalAgreement", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStoragePublishFileResult_t::RemoteStoragePublishFileResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, bool  m_bUserNeedsToAcceptWorkshopLegalAgreement) noexcept  {
this->m_eResult = m_eResult;
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_bUserNeedsToAcceptWorkshopLegalAgreement = m_bUserNeedsToAcceptWorkshopLegalAgreement;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStoragePublishFileResult_t::RemoteStoragePublishFileResult_t()   {
}
