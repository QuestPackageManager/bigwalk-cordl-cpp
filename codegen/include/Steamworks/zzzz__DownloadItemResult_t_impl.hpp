#pragma once
// IWYU pragma private; include "Steamworks/DownloadItemResult_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__DownloadItemResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_unAppID", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::DownloadItemResult_t::DownloadItemResult_t(::Steamworks::AppId_t  m_unAppID, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::EResult  m_eResult) noexcept  {
this->m_unAppID = m_unAppID;
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_eResult = m_eResult;
}
// Ctor Parameters []
constexpr ::Steamworks::DownloadItemResult_t::DownloadItemResult_t()   {
}
