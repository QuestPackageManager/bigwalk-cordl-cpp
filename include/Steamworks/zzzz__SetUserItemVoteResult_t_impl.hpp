#pragma once
// IWYU pragma private; include "Steamworks/SetUserItemVoteResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PublishedFileId_t_impl.hpp"
#include "Steamworks/zzzz__SetUserItemVoteResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nPublishedFileId", ty: "::Steamworks::PublishedFileId_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bVoteUp", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SetUserItemVoteResult_t::SetUserItemVoteResult_t(::Steamworks::PublishedFileId_t  m_nPublishedFileId, ::Steamworks::EResult  m_eResult, bool  m_bVoteUp) noexcept  {
this->m_nPublishedFileId = m_nPublishedFileId;
this->m_eResult = m_eResult;
this->m_bVoteUp = m_bVoteUp;
}
// Ctor Parameters []
constexpr ::Steamworks::SetUserItemVoteResult_t::SetUserItemVoteResult_t()   {
}
