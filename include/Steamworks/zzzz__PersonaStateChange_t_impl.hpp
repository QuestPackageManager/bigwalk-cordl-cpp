#pragma once
// IWYU pragma private; include "Steamworks/PersonaStateChange_t.hpp"
#include "Steamworks/zzzz__EPersonaChange_impl.hpp"
#include "Steamworks/zzzz__PersonaStateChange_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulSteamID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nChangeFlags", ty: "::Steamworks::EPersonaChange", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::PersonaStateChange_t::PersonaStateChange_t(uint64_t  m_ulSteamID, ::Steamworks::EPersonaChange  m_nChangeFlags) noexcept  {
this->m_ulSteamID = m_ulSteamID;
this->m_nChangeFlags = m_nChangeFlags;
}
// Ctor Parameters []
constexpr ::Steamworks::PersonaStateChange_t::PersonaStateChange_t()   {
}
