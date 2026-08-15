#pragma once
// IWYU pragma private; include "Steamworks/IPCFailure_t.hpp"
#include "Steamworks/zzzz__IPCFailure_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eFailureType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::IPCFailure_t::IPCFailure_t(uint8_t  m_eFailureType) noexcept  {
this->m_eFailureType = m_eFailureType;
}
// Ctor Parameters []
constexpr ::Steamworks::IPCFailure_t::IPCFailure_t()   {
}
