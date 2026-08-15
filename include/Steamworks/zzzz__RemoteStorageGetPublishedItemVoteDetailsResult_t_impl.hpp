#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageGetPublishedItemVoteDetailsResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageGetPublishedItemVoteDetailsResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nVotesFor", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nVotesAgainst", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nReports", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_fScore", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t::RemoteStorageGetPublishedItemVoteDetailsResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_unPublishedFileId, int32_t  m_nVotesFor, int32_t  m_nVotesAgainst, int32_t  m_nReports, float_t  m_fScore) noexcept  {
this->m_eResult = m_eResult;
this->m_unPublishedFileId = m_unPublishedFileId;
this->m_nVotesFor = m_nVotesFor;
this->m_nVotesAgainst = m_nVotesAgainst;
this->m_nReports = m_nReports;
this->m_fScore = m_fScore;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageGetPublishedItemVoteDetailsResult_t::RemoteStorageGetPublishedItemVoteDetailsResult_t()   {
}
