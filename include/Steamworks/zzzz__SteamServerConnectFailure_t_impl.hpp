#pragma once
// IWYU pragma private; include "Steamworks/SteamServerConnectFailure_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SteamServerConnectFailure_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bStillRetrying", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamServerConnectFailure_t::SteamServerConnectFailure_t(::Steamworks::EResult  m_eResult, bool  m_bStillRetrying) noexcept  {
this->m_eResult = m_eResult;
this->m_bStillRetrying = m_bStillRetrying;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamServerConnectFailure_t::SteamServerConnectFailure_t()   {
}
