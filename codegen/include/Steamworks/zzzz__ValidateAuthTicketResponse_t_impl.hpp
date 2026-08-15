#pragma once
// IWYU pragma private; include "Steamworks/ValidateAuthTicketResponse_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EAuthSessionResponse_impl.hpp"
#include "Steamworks/zzzz__ValidateAuthTicketResponse_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_SteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eAuthSessionResponse", ty: "::Steamworks::EAuthSessionResponse", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OwnerSteamID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ValidateAuthTicketResponse_t::ValidateAuthTicketResponse_t(::Steamworks::CSteamID  m_SteamID, ::Steamworks::EAuthSessionResponse  m_eAuthSessionResponse, ::Steamworks::CSteamID  m_OwnerSteamID) noexcept  {
this->m_SteamID = m_SteamID;
this->m_eAuthSessionResponse = m_eAuthSessionResponse;
this->m_OwnerSteamID = m_OwnerSteamID;
}
// Ctor Parameters []
constexpr ::Steamworks::ValidateAuthTicketResponse_t::ValidateAuthTicketResponse_t()   {
}
