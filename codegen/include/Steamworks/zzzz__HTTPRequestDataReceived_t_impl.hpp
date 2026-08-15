#pragma once
// IWYU pragma private; include "Steamworks/HTTPRequestDataReceived_t.hpp"
#include "Steamworks/zzzz__HTTPRequestHandle_impl.hpp"
#include "Steamworks/zzzz__HTTPRequestDataReceived_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hRequest", ty: "::Steamworks::HTTPRequestHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulContextValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cBytesReceived", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::HTTPRequestDataReceived_t::HTTPRequestDataReceived_t(::Steamworks::HTTPRequestHandle  m_hRequest, uint64_t  m_ulContextValue, uint32_t  m_cOffset, uint32_t  m_cBytesReceived) noexcept  {
this->m_hRequest = m_hRequest;
this->m_ulContextValue = m_ulContextValue;
this->m_cOffset = m_cOffset;
this->m_cBytesReceived = m_cBytesReceived;
}
// Ctor Parameters []
constexpr ::Steamworks::HTTPRequestDataReceived_t::HTTPRequestDataReceived_t()   {
}
