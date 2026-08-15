#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageEnumeratePublishedFilesByUserActionResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__EWorkshopFileAction_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageEnumeratePublishedFilesByUserActionResult_t_def.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eAction", ty: "::Steamworks::EWorkshopFileAction", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nResultsReturned", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nTotalResultCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgPublishedFileId", ty: "::ArrayW<::Steamworks::PublishedFileId_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgRTimeUpdated", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageEnumeratePublishedFilesByUserActionResult_t::RemoteStorageEnumeratePublishedFilesByUserActionResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::EWorkshopFileAction  m_eAction, int32_t  m_nResultsReturned, int32_t  m_nTotalResultCount, ::ArrayW<::Steamworks::PublishedFileId_t>  m_rgPublishedFileId, ::ArrayW<uint32_t>  m_rgRTimeUpdated) noexcept  {
this->m_eResult = m_eResult;
this->m_eAction = m_eAction;
this->m_nResultsReturned = m_nResultsReturned;
this->m_nTotalResultCount = m_nTotalResultCount;
this->m_rgPublishedFileId = m_rgPublishedFileId;
this->m_rgRTimeUpdated = m_rgRTimeUpdated;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageEnumeratePublishedFilesByUserActionResult_t::RemoteStorageEnumeratePublishedFilesByUserActionResult_t()   {
}
