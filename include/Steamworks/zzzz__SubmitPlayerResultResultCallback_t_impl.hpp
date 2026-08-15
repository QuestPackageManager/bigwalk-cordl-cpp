#pragma once
// IWYU pragma private; include "Steamworks/SubmitPlayerResultResultCallback_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SubmitPlayerResultResultCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "ullUniqueGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "steamIDPlayer", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SubmitPlayerResultResultCallback_t::SubmitPlayerResultResultCallback_t(::Steamworks::EResult  m_eResult, uint64_t  ullUniqueGameID, ::Steamworks::CSteamID  steamIDPlayer) noexcept  {
this->m_eResult = m_eResult;
this->ullUniqueGameID = ullUniqueGameID;
this->steamIDPlayer = steamIDPlayer;
}
// Ctor Parameters []
constexpr ::Steamworks::SubmitPlayerResultResultCallback_t::SubmitPlayerResultResultCallback_t()   {
}
