#pragma once
// IWYU pragma private; include "Steamworks/GSGameplayStats_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__GSGameplayStats_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nRank", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unTotalConnects", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unTotalMinutesPlayed", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GSGameplayStats_t::GSGameplayStats_t(::Steamworks::EResult  m_eResult, int32_t  m_nRank, uint32_t  m_unTotalConnects, uint32_t  m_unTotalMinutesPlayed) noexcept  {
this->m_eResult = m_eResult;
this->m_nRank = m_nRank;
this->m_unTotalConnects = m_unTotalConnects;
this->m_unTotalMinutesPlayed = m_unTotalMinutesPlayed;
}
// Ctor Parameters []
constexpr ::Steamworks::GSGameplayStats_t::GSGameplayStats_t()   {
}
