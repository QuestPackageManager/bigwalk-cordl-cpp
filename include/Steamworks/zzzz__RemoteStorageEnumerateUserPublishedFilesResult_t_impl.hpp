#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageEnumerateUserPublishedFilesResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageEnumerateUserPublishedFilesResult_t_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nResultsReturned", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nTotalResultCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgPublishedFileId", ty: "::ArrayW<::Steamworks::PublishedFileId_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageEnumerateUserPublishedFilesResult_t::RemoteStorageEnumerateUserPublishedFilesResult_t(::Steamworks::EResult  m_eResult, int32_t  m_nResultsReturned, int32_t  m_nTotalResultCount, ::ArrayW<::Steamworks::PublishedFileId_t>  m_rgPublishedFileId) noexcept  {
this->m_eResult = m_eResult;
this->m_nResultsReturned = m_nResultsReturned;
this->m_nTotalResultCount = m_nTotalResultCount;
this->m_rgPublishedFileId = m_rgPublishedFileId;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageEnumerateUserPublishedFilesResult_t::RemoteStorageEnumerateUserPublishedFilesResult_t()   {
}
