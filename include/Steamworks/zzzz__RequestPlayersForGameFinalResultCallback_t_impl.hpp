#pragma once
// IWYU pragma private; include "Steamworks/RequestPlayersForGameFinalResultCallback_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__RequestPlayersForGameFinalResultCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ullSearchID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ullUniqueGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RequestPlayersForGameFinalResultCallback_t::RequestPlayersForGameFinalResultCallback_t(::Steamworks::EResult  m_eResult, uint64_t  m_ullSearchID, uint64_t  m_ullUniqueGameID) noexcept  {
this->m_eResult = m_eResult;
this->m_ullSearchID = m_ullSearchID;
this->m_ullUniqueGameID = m_ullUniqueGameID;
}
// Ctor Parameters []
constexpr ::Steamworks::RequestPlayersForGameFinalResultCallback_t::RequestPlayersForGameFinalResultCallback_t()   {
}
