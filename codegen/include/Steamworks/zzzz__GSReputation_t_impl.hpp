#pragma once
// IWYU pragma private; include "Steamworks/GSReputation_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__GSReputation_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unReputationScore", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bBanned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unBannedIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usBannedPort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulBannedGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unBanExpires", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GSReputation_t::GSReputation_t(::Steamworks::EResult  m_eResult, uint32_t  m_unReputationScore, bool  m_bBanned, uint32_t  m_unBannedIP, uint16_t  m_usBannedPort, uint64_t  m_ulBannedGameID, uint32_t  m_unBanExpires) noexcept  {
this->m_eResult = m_eResult;
this->m_unReputationScore = m_unReputationScore;
this->m_bBanned = m_bBanned;
this->m_unBannedIP = m_unBannedIP;
this->m_usBannedPort = m_usBannedPort;
this->m_ulBannedGameID = m_ulBannedGameID;
this->m_unBanExpires = m_unBanExpires;
}
// Ctor Parameters []
constexpr ::Steamworks::GSReputation_t::GSReputation_t()   {
}
