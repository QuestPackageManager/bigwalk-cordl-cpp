#pragma once
// IWYU pragma private; include "Steamworks/ComputeNewPlayerCompatibilityResult_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__ComputeNewPlayerCompatibilityResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cPlayersThatDontLikeCandidate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cPlayersThatCandidateDoesntLike", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cClanPlayersThatDontLikeCandidate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamIDCandidate", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ComputeNewPlayerCompatibilityResult_t::ComputeNewPlayerCompatibilityResult_t(::Steamworks::EResult  m_eResult, int32_t  m_cPlayersThatDontLikeCandidate, int32_t  m_cPlayersThatCandidateDoesntLike, int32_t  m_cClanPlayersThatDontLikeCandidate, ::Steamworks::CSteamID  m_SteamIDCandidate) noexcept  {
this->m_eResult = m_eResult;
this->m_cPlayersThatDontLikeCandidate = m_cPlayersThatDontLikeCandidate;
this->m_cPlayersThatCandidateDoesntLike = m_cPlayersThatCandidateDoesntLike;
this->m_cClanPlayersThatDontLikeCandidate = m_cClanPlayersThatDontLikeCandidate;
this->m_SteamIDCandidate = m_SteamIDCandidate;
}
// Ctor Parameters []
constexpr ::Steamworks::ComputeNewPlayerCompatibilityResult_t::ComputeNewPlayerCompatibilityResult_t()   {
}
