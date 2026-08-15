#pragma once
// IWYU pragma private; include "Steamworks/NumberOfCurrentPlayers_t.hpp"
#include "Steamworks/zzzz__NumberOfCurrentPlayers_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_bSuccess", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cPlayers", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::NumberOfCurrentPlayers_t::NumberOfCurrentPlayers_t(uint8_t  m_bSuccess, int32_t  m_cPlayers) noexcept  {
this->m_bSuccess = m_bSuccess;
this->m_cPlayers = m_cPlayers;
}
// Ctor Parameters []
constexpr ::Steamworks::NumberOfCurrentPlayers_t::NumberOfCurrentPlayers_t()   {
}
