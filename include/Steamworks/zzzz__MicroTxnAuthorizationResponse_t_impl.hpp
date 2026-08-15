#pragma once
// IWYU pragma private; include "Steamworks/MicroTxnAuthorizationResponse_t.hpp"
#include "Steamworks/zzzz__MicroTxnAuthorizationResponse_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_unAppID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulOrderID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bAuthorized", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::MicroTxnAuthorizationResponse_t::MicroTxnAuthorizationResponse_t(uint32_t  m_unAppID, uint64_t  m_ulOrderID, uint8_t  m_bAuthorized) noexcept  {
this->m_unAppID = m_unAppID;
this->m_ulOrderID = m_ulOrderID;
this->m_bAuthorized = m_bAuthorized;
}
// Ctor Parameters []
constexpr ::Steamworks::MicroTxnAuthorizationResponse_t::MicroTxnAuthorizationResponse_t()   {
}
