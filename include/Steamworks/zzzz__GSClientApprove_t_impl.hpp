#pragma once
// IWYU pragma private; include "Steamworks/GSClientApprove_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__GSClientApprove_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_SteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OwnerSteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GSClientApprove_t::GSClientApprove_t(::Steamworks::CSteamID  m_SteamID, ::Steamworks::CSteamID  m_OwnerSteamID) noexcept  {
this->m_SteamID = m_SteamID;
this->m_OwnerSteamID = m_OwnerSteamID;
}
// Ctor Parameters []
constexpr ::Steamworks::GSClientApprove_t::GSClientApprove_t()   {
}
