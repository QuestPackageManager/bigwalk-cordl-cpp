#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageEnumerateWorkshopFilesResult_t.hpp"
#include "Steamworks/zzzz__AppId_t_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageEnumerateWorkshopFilesResult_t_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nResultsReturned", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nTotalResultCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgPublishedFileId", ty: "::ArrayW<::Steamworks::PublishedFileId_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgScore", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nAppId", ty: "::Steamworks::AppId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unStartIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageEnumerateWorkshopFilesResult_t::RemoteStorageEnumerateWorkshopFilesResult_t(::Steamworks::EResult  m_eResult, int32_t  m_nResultsReturned, int32_t  m_nTotalResultCount, ::ArrayW<::Steamworks::PublishedFileId_t>  m_rgPublishedFileId, ::ArrayW<float_t>  m_rgScore, ::Steamworks::AppId_t  m_nAppId, uint32_t  m_unStartIndex) noexcept  {
this->m_eResult = m_eResult;
this->m_nResultsReturned = m_nResultsReturned;
this->m_nTotalResultCount = m_nTotalResultCount;
this->m_rgPublishedFileId = m_rgPublishedFileId;
this->m_rgScore = m_rgScore;
this->m_nAppId = m_nAppId;
this->m_unStartIndex = m_unStartIndex;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageEnumerateWorkshopFilesResult_t::RemoteStorageEnumerateWorkshopFilesResult_t()   {
}
