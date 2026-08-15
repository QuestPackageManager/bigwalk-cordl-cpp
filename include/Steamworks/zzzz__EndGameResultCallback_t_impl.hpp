#pragma once
// IWYU pragma private; include "Steamworks/EndGameResultCallback_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__EndGameResultCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "ullUniqueGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EndGameResultCallback_t::EndGameResultCallback_t(::Steamworks::EResult  m_eResult, uint64_t  ullUniqueGameID) noexcept  {
this->m_eResult = m_eResult;
this->ullUniqueGameID = ullUniqueGameID;
}
// Ctor Parameters []
constexpr ::Steamworks::EndGameResultCallback_t::EndGameResultCallback_t()   {
}
