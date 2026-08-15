#pragma once
// IWYU pragma private; include "Steamworks/RemoteStorageUserVoteDetails_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__EWorkshopVote_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__RemoteStorageUserVoteDetails_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eVote", ty: "::Steamworks::EWorkshopVote", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RemoteStorageUserVoteDetails_t::RemoteStorageUserVoteDetails_t(::Steamworks::EResult  m_eResult, ::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::EWorkshopVote  m_eVote) noexcept  {
this->m_eResult = m_eResult;
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_eVote = m_eVote;
}
// Ctor Parameters []
constexpr ::Steamworks::RemoteStorageUserVoteDetails_t::RemoteStorageUserVoteDetails_t()   {
}
