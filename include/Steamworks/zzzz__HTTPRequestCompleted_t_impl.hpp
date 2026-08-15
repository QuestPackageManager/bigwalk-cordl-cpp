#pragma once
// IWYU pragma private; include "Steamworks/HTTPRequestCompleted_t.hpp"
#include "Steamworks/zzzz__EHTTPStatusCode_impl.hpp"
#include "Steamworks/zzzz__HTTPRequestHandle_impl.hpp"
#include "Steamworks/zzzz__HTTPRequestCompleted_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hRequest", ty: "::Steamworks::HTTPRequestHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulContextValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bRequestSuccessful", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eStatusCode", ty: "::Steamworks::EHTTPStatusCode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unBodySize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTTPRequestCompleted_t::HTTPRequestCompleted_t(::Steamworks::HTTPRequestHandle  m_hRequest, uint64_t  m_ulContextValue, bool  m_bRequestSuccessful, ::Steamworks::EHTTPStatusCode  m_eStatusCode, uint32_t  m_unBodySize) noexcept  {
this->m_hRequest = m_hRequest;
this->m_ulContextValue = m_ulContextValue;
this->m_bRequestSuccessful = m_bRequestSuccessful;
this->m_eStatusCode = m_eStatusCode;
this->m_unBodySize = m_unBodySize;
}
// Ctor Parameters []
constexpr ::Steamworks::HTTPRequestCompleted_t::HTTPRequestCompleted_t()   {
}
