#pragma once
// IWYU pragma private; include "Steamworks/SetPersonaNameResponse_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SetPersonaNameResponse_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_bSuccess", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bLocalSuccess", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_result", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SetPersonaNameResponse_t::SetPersonaNameResponse_t(bool  m_bSuccess, bool  m_bLocalSuccess, ::Steamworks::EResult  m_result) noexcept  {
this->m_bSuccess = m_bSuccess;
this->m_bLocalSuccess = m_bLocalSuccess;
this->m_result = m_result;
}
// Ctor Parameters []
constexpr ::Steamworks::SetPersonaNameResponse_t::SetPersonaNameResponse_t()   {
}
