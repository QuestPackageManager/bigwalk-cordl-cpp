#pragma once
// IWYU pragma private; include "Steamworks/GetAuthSessionTicketResponse_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__HAuthTicket_impl.hpp"
#include "Steamworks/zzzz__GetAuthSessionTicketResponse_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hAuthTicket", ty: "::Steamworks::HAuthTicket", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GetAuthSessionTicketResponse_t::GetAuthSessionTicketResponse_t(::Steamworks::HAuthTicket  m_hAuthTicket, ::Steamworks::EResult  m_eResult) noexcept  {
this->m_hAuthTicket = m_hAuthTicket;
this->m_eResult = m_eResult;
}
// Ctor Parameters []
constexpr ::Steamworks::GetAuthSessionTicketResponse_t::GetAuthSessionTicketResponse_t()   {
}
