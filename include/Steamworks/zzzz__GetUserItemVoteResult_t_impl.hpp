#pragma once
// IWYU pragma private; include "Steamworks/GetUserItemVoteResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__GetUserItemVoteResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bVotedUp", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bVotedDown", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bVoteSkipped", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GetUserItemVoteResult_t::GetUserItemVoteResult_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::EResult  m_eResult, bool  m_bVotedUp, bool  m_bVotedDown, bool  m_bVoteSkipped) noexcept  {
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_eResult = m_eResult;
this->m_bVotedUp = m_bVotedUp;
this->m_bVotedDown = m_bVotedDown;
this->m_bVoteSkipped = m_bVoteSkipped;
}
// Ctor Parameters []
constexpr ::Steamworks::GetUserItemVoteResult_t::GetUserItemVoteResult_t()   {
}
