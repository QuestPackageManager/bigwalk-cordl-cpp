#pragma once
// IWYU pragma private; include "Steamworks/HTTPRequestHeadersReceived_t.hpp"
#include "Steamworks/zzzz__HTTPRequestHandle_impl.hpp"
#include "Steamworks/zzzz__HTTPRequestHeadersReceived_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hRequest", ty: "::Steamworks::HTTPRequestHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulContextValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTTPRequestHeadersReceived_t::HTTPRequestHeadersReceived_t(::Steamworks::HTTPRequestHandle  m_hRequest, uint64_t  m_ulContextValue) noexcept  {
this->m_hRequest = m_hRequest;
this->m_ulContextValue = m_ulContextValue;
}
// Ctor Parameters []
constexpr ::Steamworks::HTTPRequestHeadersReceived_t::HTTPRequestHeadersReceived_t()   {
}
